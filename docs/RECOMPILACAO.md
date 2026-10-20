**Português** · [English](en/RECOMPILATION.md)

# A recompilação em Lazarus

Objetivo: um executável moderno que **seja o mesmo programa**, com código-fonte
legível e editável e com cada decisão rastreável até o binário original.

## Do binário ao fonte

```
PokéFight1.2.exe
 ├─ RCDATA (14 DFMs)  ── tools/dfm2lfm.py ──────────────► src/*.lfm    (layout, menus, textos fixos)
 ├─ VMT/métodos       ── analysis/ferramentas/vmt.py ───► endereço de cada handler
 ├─ código            ── REA + Ghidra (ExportDelphi.java) ► analysis/decompilado/*.c
 │                         └─ extract.py / extract_extras.py ─► analysis/dados/*.json
 │                                └─ tools/gen_pascal_data.py ─► src/upokedados.pas, src/uextras.pas
 └─ blobs dos DFMs    ── tools/ui_assets.py ────────────► assets/ui/ (logos, molduras, ícones)
```

Os handlers foram portados manualmente a partir do pseudocódigo, mantendo o nome
original e o endereço em comentário. Exemplo:

```pascal
// 0x4b9df4
procedure TAPKG.ListBox1Click(Sender: TObject);
begin
  if not Imprimir1.Enabled then Imprimir1.Enabled := True;
  if Ligado.Checked then AnimarBarras;
  ...
```

## Mapa de componentes

| Original (Delphi 3 + RX Library) | Recompilação (LCL) | Observação |
|---|---|---|
| `TRxGIFAnimator` | `TImage` + `TGifPlayer` (`ugifplayer.pas`) | decodificador GIF próprio, com a mesma semântica de transparência da RX (ver abaixo) |
| `TSecretPanel` (créditos rolando) | `TPanel` + `TPaintBox` | 35 ms por pixel, cíclico, clique pausa |
| `TRxTrayIcon` (12 quadros) | `TTrayIcon` animado | ícones extraídos do DFM |
| `TAppEvents` (minimizar/restaurar) | `OnWindowStateChange` | |
| `TFormStorage` (registro) | `IniFiles` em `%APPDATA%\PokeFightAgenda\agenda.ini` | tema, efeitos e cores personalizadas |
| `TRxGradientCaption` | — | o título em degradê não existe no Windows 11 |
| `TColorComboBox` | `TColorBox` | |
| `TRichEdit` / `TRxRichEdit` | `TMemo` | os textos do Guia Gold/Silver e dos códigos não têm formatação |
| `TNMSMTP` (NetMasters) | — | e-mail desativado (servidor extinto) |
| `TMainForm` (editor RTF da RX) | `TEditorForm` (texto puro, montado em código) | ver "Editor" abaixo |

## Diferenças conhecidas (intencionais)

| Onde | Original | Recompilação | Motivo |
|---|---|---|---|
| `ListBox1Click` / `Edit1Change` | ~2.200 `if ItemIndex = N` em cada | tabela `POKEDEX[]` + `MostrarEntrada` | mesmo resultado, código legível |
| Abertura | `inicial` é o MainForm e chama `APKG.ShowModal` | abertura modal antes, `APKG` é o MainForm | na LCL, esconder um form modal para a bandeja não é confiável |
| Instalação dos dados | `press.com`/`img.com` → `c:\windows\data` | `data\` já vem extraída ao lado do EXE | sem 16 bits e sem gravar na pasta do Windows |
| Popup "Copiar" | só mostrava "Copiado!" | copia de verdade e mostra "Copiado!" | correção pequena |
| E-mail | SMTP porta 25, sem autenticação, para o autor | mensagem explicando | o servidor não existe |
| WebSite | IE com caminho fixo → `www.pokefight.cjb.net` | navegador padrão → Internet Archive | o site acabou |
| Editor → Pokémon Atual | colava o GIF no documento RTF | copia a imagem para a área de transferência | editor só de texto |
| Botão "Personagens" | `Visible = False`, nunca exibido | `Ctrl+Shift+P` alterna a visibilidade | revela conteúdo escondido desde 2000 |
| Componente `Menu` | nome aceito pelo Delphi | `MenuBandeja` | no FPC, campo não pode ter o nome da propriedade `TForm.Menu` |

Comportamentos **mantidos de propósito**, mesmo parecendo bugs:
* clicar na lista só anima as barras com Efeitos > Ligado (o padrão do original é nenhum dos dois
  marcado); a busca anima sempre, mesmo com Efeitos > Desligado. Cada animação toca uma vez e
  se desliga sozinha, como no `TRxGIFAnimator` (regra conferida na RX Library compilada no EXE:
  `TimerExpired` 0x47913c → `SetAnimate(False)` em 0x479108);
* "Editar / Imprimir" só é liberado depois de um clique na lista (a busca não libera);
* "Atualizar Agenda" só mostra "Você não tem autorização…";
* o aviso "anti-cópia" quando o toggle do PrintScreen está ativo;
* buscar "Mew" seleciona Mewtwo (`LB_FINDSTRING` faz busca por prefixo);
* os dados com erros da época (*Cartepie*, *Arcannine*, a localização "Evolução"…).

## Detalhes de compatibilidade

### Transparência dos GIFs

A RX Library transformava a **cor** do índice transparente em cor-chave. O botão "Sair"
tem fundo preto *opaco* (índice 7) e índice transparente também preto (índice 0, que
não é usado). Na RX, todo preto some. Um decodificador "correto" mostraria um quadrado
preto. O `ugifplayer.pas` reproduz a regra da RX.

### GroupBox

No Delphi 3, as coordenadas dos filhos contam a partir da borda externa do GroupBox;
na LCL, a partir da área cliente. Além disso, o tema do Windows 11 ignora a cor da
fonte do título (branco no original). `ucomum.AjustarGroupBoxes` redesenha o título com
um `TStaticText` e devolve os filhos à posição do DFM.

### DPI

O projeto declara *Per-Monitor v2* e `Scaled = True`, então a LCL escala o layout,
desenhado para 96 DPI. Os testes foram feitos com escala de 100%; em outras escalas, o
alinhamento fino das molduras pode precisar de ajuste.

## Testes feitos (Windows 11, 64 bits)

Automatizados com mensagens Win32 e capturas (`PrintWindow`):
abertura → Entrar; busca ("Pika", "Mew", "Ash"); clique na lista; todos os menus
(TMs, Poké-Marts, Gold/Silver, Versão Amarela, Sobre, Personalizar cores, Editar /
Imprimir → Inserir texto); temas; `Ctrl+Shift+P` → Personagens; minimizar para a
bandeja; preferências salvas ao fechar.

![Janelas secundárias](img/lazarus-janelas.png)
