**Português** · [English](README.en.md)

# Engenharia reversa — "PokeDex (Raro)" / Agenda Pokémon - Poké Fight v1.2

> Relatório da análise estática que deu origem a este repositório. Os caminhos citados
> são relativos a `analysis/`. A versão para Windows 11 e a recompilação estão
> documentadas em [`../docs`](../docs). O pacote analisado está em `../legacy/original`.

> Alvo: `PokeDex (Raro)/` · executável principal `PokéFight1.2.exe`
> (SHA-256 `ff860b60a0b18a625a0b2cebb54bf961b8cefb09b3b2542bc474d7d545aab295`, 1.376.256 bytes, PE32 i386 GUI, data do arquivo 20/01/2000)
> Ferramentas: REA 6.5.0 (CLI e MCP) · Ghidra 12.1.4 headless · JDK 21.0.12 · scripts próprios em `ferramentas/`

## 1. Resumo

É uma **Pokédex da 1ª geração feita em Delphi 3 por fãs brasileiros em 1999/2000** ("Agenda Pokémon da Poké Fight",
créditos `|Felix|` na programação e design e `[_KangaskhaN_]` nas imagens). O programa original se chamava
**"KillerGym"**, nome que ainda aparece em menus, no assunto do e-mail, na extensão `.GYM` e em `Gym.com`.

- **Não há banco de dados.** Os 158 registros (151 Pokémon + Missingno + 6 personagens) estão **escritos no código**:
  `TAPKG.ListBox1Click` (0x4b9df4) e `TAPKG.Edit1Change` (0x4d9668) têm 79 KB cada e são cadeias de cerca de 2.200
  `if ListBox1.ItemIndex = N then Componente.Text := '...'`. Os dois handlers são o mesmo código copiado.
- **As imagens ficam fora do EXE**, em ZIPs renomeados para `.GYM`. Na primeira execução, o programa extrai esses ZIPs
  para `C:\windows\data\` usando dois `.BAT` compilados (`IMG.COM`, `PRESS.COM`) e o PKUNZJR renomeado (`Gym.com`).
- Extraí a Pokédex inteira para `dados/pokedex.json` e `dados/pokedex.csv`. A extração foi conferida comparando os
  dois handlers independentes: **0 diferenças**.
- As proteções são de fachada (aviso de "anti-cópia", botão "Atualizar" falso, "Copiar" que não copia), e há
  código morto: o botão secreto "Personagens", que libera Ash, Brock, Misty, Oak, Team Rocket e Gary, nunca aparece.

## 2. Inventário de arquivos

| Arquivo | O que é (verificado) |
|---|---|
| `PokéFight1.2.exe` | Aplicativo Delphi 3 + RX Library + NetMasters FastNet (TNMSMTP). 14 DFMs em RCDATA. |
| `IMG.GYM` (1,4 MB) | ZIP (deflate) com 158 GIFs: `000–151.gif` (sprites 195×195, animados) + `ash/brock/gary/misty/Oak/team.gif`. |
| `DATA.GYM` (26 KB) | ZIP com `1.gif`…`6.gif`: **barras de status** animadas, do nível 1 (vermelha, curta) ao 6 (verde, cheia). |
| `Gym.com` (2.750 B) | **PKUNZJR 2.04c (PKWARE, 1992) renomeado.** Uso: `pkunzjr [-o] arquivo[.zip] [destino]`. |
| `IMG.COM` / `PRESS.COM` | Arquivos `.BAT` compilados com **BAT2EXEC 1.5** (PC Magazine). Script recuperado abaixo. |
| `poke agenda.rar` | Backup idêntico da pasta (166 arquivos; o EXE tem o mesmo MD5 `329f1e80…`). |
| `000.gif`…`151.gif`, `ash.gif`… | Mesmas imagens do `IMG.GYM`, já descompactadas. |
| `Gym.PIF`, `Desktop.ini`, `Thumbs.db` | Resíduos do Windows XP do dono da pasta (2003–2006). Não fazem parte do programa. |

Script recuperado do `IMG.COM` (o `PRESS.COM` é igual, mas usa `data.gym`/`data.zip`):

```bat
RENAME img.gym img.zip
MD c:\windows\data
GYM img.zip c:\windows\data\
RENAME img.zip img.gym
```

## 3. Metodologia

1. **Triagem**: `file`, strings, listagem de ZIP/RAR. Assim identifiquei o BAT2EXEC, o PKUNZJR e o Delphi.
2. **REA**: `rea doctor` (provider Ghidra saudável com o Ghidra e o JDK desta pasta), `rea inspect` (overview:
   9 segmentos, 4.410 procedures, 3.543 strings), `rea inspect-pe-resources` (90 recursos, 14 forms DFM) e um
   cliente MCP próprio (`ferramentas/mcp.mjs`) que mantém **uma sessão Ghidra persistente** para `open_binary` e
   `procedure_pseudo_code`, incluindo o `entry`.
3. **Metadados Delphi** (`ferramentas/vmt.py`): varredura de VMTs (self-pointer em −76). Leitura da *method table*
   (nome do handler → endereço) e da *field table* (offset → componente) de 284 classes.
4. **Ghidra headless + JDK** (`ferramentas/ExportDelphi.java`): no Windows, o REA funciona só em modo leitura
   ("Windows P0") e o auto-análise do Ghidra não cria funções nos handlers Delphi, porque eles só são referenciados
   pela VMT. O script cria as funções nos endereços da VMT, corrige disassembly desalinhado, dá nome às rotinas
   RTL/VCL identificadas e decompila **155 funções**.
5. **Pós-processamento** (`ferramentas/clean.py`): resolve `UNK_xxxx` para literais (AnsiString com refcount −1 ou
   PChar), `param_1 + 0xNNN` para `Self->Componente` e ponteiros de VMT para `class_TForm`.
6. **DFM → texto** (`ferramentas/dfm.py`): decodificador próprio do formato binário `TPF0`.
7. **Extração dos dados** (`ferramentas/extract.py`): faz o parse das cadeias de `if` decompiladas e valida
   `ListBox1Click` contra `Edit1Change`.

## 4. Arquitetura do programa

```
entry (0x4fad..)
 ├─ Application.Title := 'Agenda Pokémon - Poké Fight v1.2'
 ├─ CreateForm(Tinicial)  → splash (vira o MainForm)   "Versão: 1.2 / http://www.pokefight.cjb.net"
 ├─ CreateForm(TAPKG)     → a Pokédex
 └─ Application.Run
Tinicial.FormActivate : se não existir c:\windows\data\1.gif → WinExec('press.com')
Tinicial.enterClick   : APKG.ShowModal
TAPKG.FormActivate    : inicial.Hide; extrai DATA/IMG se faltarem; avisa se faltar press.com, data.gym, gym.com, img.gym ou img.com
```

| Form | Função | Handlers |
|---|---|---|
| `TAPKG` | Pokédex: lista, busca, sprite, nome, nº, tipo, versão, evolução, localização, descrição, golpes, 5 barras de status, relógio, temas, bandeja | 38 |
| `TMainForm` | Editor RTF "Editor - KillerGym v1.2" (TRxRichEdit). Insere o sprite ou o texto do Pokémon atual. Baseado no demo RichEdit da RX Library. | 66 |
| `Temail` | Feedback por SMTP (TNMSMTP, porta 25, remetente e destinatário fixos, sem senha) | 25 |
| `Ttm` | Lista das 50 TMs e 5 HMs e onde encontrar cada uma | 3 |
| `TMarts` | Itens e preços dos Poké-Marts por cidade | 3 |
| `TGold` | "Guia completo de Gold/Silver" (texto longo no DFM) | 4 |
| `Tyellow` | Códigos de GameShark da versão Amarela | 1 |
| `TCores` | Personalização de cores, salva pelo TFormStorage no registro | 7 |
| `Tabout` | Sobre, com créditos rolando (TSecretPanel) | 5 |
| `Timprimir`, `TNMShow` | DFMs **órfãos** (sem classe no EXE) / tela de registro do componente NetMasters | – |

Mapeamento visual do `TAPKG` (offsets da field table + posições no DFM):
`Edit2`=Nome, `Edit7`=Nº, `Edit3`=Tipo, `Edit4`=Versão, `Edit5`=Evolução, `Edit6`=Localização, `Memo1`=Descrição,
`movi`=Movimentos, `animator`=sprite, e `i1..i5` = barras **Energia, Ataque, Defesa, Velocidade, Especial**
(nessa ordem, de cima para baixo).

## 5. A Pokédex (dados)

Formato do registro, reconstruído em `reconstrucao/PokeDados.inc`:

```
Numero, Nome, Tipo, Versao, Evolucao, Localizacao, Descricao, Movimentos, Sprite,
Energia/Ataque/Defesa/Velocidade/Especial ∈ {1..6}  → c:\windows\data\<n>.gif
```

- Índices 0–149 correspondem a #001–#150. Índice 150 = **Missingno (#000)**, índice 151 = **Mew (#151)**.
  Os índices 152–157 são personagens (Ash, Brock, Misty, Oak, Team Rocket e Gary), com barras limpas e sem texto.
  Eles só existem na lista do botão oculto "Personagens" (ver §6).
- Versão: 130 "Azul e Vermelha", 12 "Azul (Somente)", 10 exclusivos da Vermelha (grafado de dois jeitos).
- Os stats não são números, são **barras de 1 a 6** (GIFs animados).
- Curiosidades do conteúdo: a descrição do Mew traz o código de GameShark `0115D8CF`, e a de Missingno diz
  "talvez um pokémon real… um bug do jogo". Há erros de digitação da época: *Cartepie*, *Arcannine*, *Seell*,
  *Exeggcutor*, *Dragonaire*, *Anditode*, *Fucshia*.
- Antes da cadeia de `if`, o handler grava valores "padrão" (Versão/Evolução/Localização do Bulbasaur), que logo
  em seguida são sobrescritos.

## 6. Easter eggs, código morto e "proteções"

| Item | Endereço | O que realmente faz |
|---|---|---|
| Botão `code` "Personagens" | 0x4fa208 | Troca a lista para 152 Pokémon + Ash, Brock, Misty, Oak, Team Rocket e Gary (158 itens). É `Visible=False` e **nada o torna visível**. Por isso os índices 152–157 dos dois handlers são **inalcançáveis**: é código morto. |
| `code1` no Sobre | 0x4a3aec | Com **Scroll Lock** ligado, a imagem `code1` fica Enabled. Ela não tem OnClick, então é um easter egg inacabado. |
| Anti-cópia | 0x4d9668 | Na busca, se o toggle de **PrintScreen** estiver ativo, mostra "Você não tem autorização para copiar…". Não bloqueia nada. |
| "Atualizar Agenda" | 0x4fa860 | Só mostra "Você não tem autorização, para atualizar este software via internet!". |
| Popup "Copiar" | 0x4fa1e8 | Só mostra "Copiado!", sem tocar no clipboard. |
| Créditos | `Tabout` | Clicar no painel de créditos alterna a rolagem (pausa/continua). |

## 7. Observações técnicas e de segurança (contexto de 2000)

- `WinExec('press.com')` e `WinExec('img.com')` usam **caminho relativo**: o programa executa qualquer `press.com`
  ou `img.com` que estiver no diretório atual.
- Os dados vão para `C:\windows\data\`, um caminho fixo que exige escrita na pasta do Windows (falha em Windows
  modernos sem privilégio, e o programa só avisa).
- O site é aberto com o caminho fixo `c:\arquivos de programas\Internet Explorer\Iexplore.exe`, que só funciona
  em Windows em português.
- O e-mail usa SMTP sem autenticação em servidor e conta fixos no DFM (`dfm/TEMAIL.dfm`).
- Preferências (cores, fontes, tema, efeitos) ficam no registro (TFormStorage, `UseRegistry=True`, `apkg.ini`).
- Não encontrei rede além do SMTP, nem persistência, ofuscação ou packer. O EXE é Delphi puro sem compressão.

## 8. Mapa dos handlers principais

| Handler | Endereço | | Handler | Endereço |
|---|---|---|---|---|
| `TAPKG.FormCreate` | 0x4f8f00 | | `TAPKG.Imprimir1Click` | 0x4f9bfc |
| `TAPKG.FormActivate` | 0x4f9cdc | | `TAPKG.Email1Click` | 0x4fa74c |
| `TAPKG.ListBox1Click` | 0x4b9df4 | | `TAPKG.codeClick` | 0x4fa208 |
| `TAPKG.Edit1Change` | 0x4d9668 | | `TAPKG.t1..t4Click` | 0x4f96f4… |
| `Tinicial.FormActivate` | 0x4b94b8 | | `Tabout.Timer1Timer` | 0x4a3aec |
| `Temail.enviarClick` | 0x4a9a84 | | `Ttm.ListBox1Click` | 0x4b846c |

A lista completa (153 métodos de 11 forms) está em `evidencias/vmts.json`, e o pseudocódigo de cada um em
`decompilado/`.

## 9. Conteúdo desta pasta

```
dados/          pokedex.json, pokedex.csv (;-separado, UTF-8 BOM)
decompilado/    155 funções em pseudo-C (Ghidra), com strings e componentes resolvidos
dfm/            14 forms em texto Delphi (gerados por ../tools/dfm2lfm.py --text)
reconstrucao/   PokeFight.dpr, APKG.pas (equivalente funcional), PokeDados.inc (gerado)
evidencias/     saídas REA (inspect, pe-resources, entry), VMTs e field tables
ferramentas/    scripts para reproduzir tudo
```

## 10. Limitações

- O pseudocódigo é saída do decompilador Ghidra, não o fonte original. `APKG.pas` é uma reconstrução
  **funcional**: o original repetia literais em cadeias de `if`, e aqui isso foi trocado por uma tabela.
- Algumas rotinas RTL/VCL foram nomeadas pelo contexto da chamada (ex.: `TControl_SetText`, `TCustomForm_Close`)
  e não por assinatura. Rotinas não usadas na lógica da aplicação ficaram como `FUN_xxxxxxxx`.
- A flag global testada em `AppEvents1Minimize` (0x4fd7fc) não foi identificada.
- Não executei o programa (análise 100% estática).

## 11. Como reproduzir

```powershell
$env:GHIDRA_INSTALL_DIR="Y:\rea-projects\pokedex-old\ghidra_12.1.4_PUBLIC"
$env:JAVA_HOME="Y:\rea-projects\pokedex-old\jdk-21.0.12.1+1"
node rea\scripts\rea.mjs inspect <copia>\PokeFight12.exe --provider ghidra --format json
node rea\scripts\rea.mjs inspect-pe-resources <copia>\PokeFight12.exe --format json > rsrc.json
python -I ferramentas\vmt.py <exe> vmts.json TAPKG          # VMTs + field tables
python -I ferramentas\dfm.py <exe> rsrc.json dfm\            # DFMs
# lista: renames.txt + handlers.txt + "TAPKG.ListBox1Click 0x4b9df4" / "TAPKG.Edit1Change 0x4d9668"
analyzeHeadless.bat <proj> pf -import <exe> -scriptPath ferramentas -postScript ExportDelphi.java all.txt <saida> 1500
python -I ferramentas\clean.py <exe> fields.json vmts.json <saida> <limpo>
python -I ferramentas\extract.py <limpo>\TAPKG.ListBox1Click.c pokedex_listbox.json
python -I ferramentas\gen_inc.py .
```
