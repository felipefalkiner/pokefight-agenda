{ ============================================================================
  APKG.pas — reconstrução da unit principal da "Agenda Pokémon - Poké Fight v1.2"
  (PokéFight1.2.exe, Delphi 3 + RxLib 2.x + NetMasters FastNet, jan/2000).

  Fonte: decompilação Ghidra 12.1.4 (via REA + script headless ExportDelphi.java),
  tabela de métodos publicados da VMT de TAPKG (0x4b9584), tabela de campos e
  DFM "TAPKG" (RCDATA). Endereços originais anotados em cada handler.

  É um EQUIVALENTE FUNCIONAL, não o fonte original:
   * O original não tinha tabela de dados: ListBox1Click (0x4b9df4, 79 KB) e
     Edit1Change (0x4d9668, 79 KB) são cadeias de ~2.200 "if ListBox1.ItemIndex
     = N then Componente.Text := '...'" — uma por propriedade por Pokémon.
     Aqui isso vira o array POKEDEX[] em PokeDados.inc (gerado de
     dados/pokedex.json), aplicado por MostrarEntrada().
   * Os dois handlers gigantes são o mesmo código duplicado; Edit1Change apenas
     faz antes a busca incremental (LB_FINDSTRING) e o "aviso anti-cópia".
  ============================================================================ }
unit APKG;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, ExtCtrls, Menus, Buttons,
  RXGIFAnimator {TRxGIFAnimator}, RxMenus, RXShell {TRxTrayIcon},
  AppEvent {TAppEvents}, Placemnt {TFormStorage}, RXCtrls {TRxGradientCaption};

type
  TAPKG = class(TForm)
    // --- campos publicados (offset na instância conforme a field table) ---
    animator: TRxGIFAnimator;        // 0x2c4  sprite do Pokémon (c:\windows\data\NNN.gif)
    Edit1: TEdit;                    // 0x2dc  busca incremental
    ListBox1: TListBox;              // 0x2e0  "Lista de Pokémons"
    Memo1: TMemo;                    // 0x2e4  Descrição
    movi: TMemo;                     // 0x2ec  Movimentos
    Edit2: TEdit;                    // 0x2f0  Nome
    Edit3: TEdit;                    // 0x2f4  Tipo
    Edit4: TEdit;                    // 0x2f8  Versão
    Edit5: TEdit;                    // 0x2fc  Evolução
    Edit6: TEdit;                    // 0x300  Localização
    Edit7: TEdit;                    // 0x388  Nº
    i1, i2, i3, i4, i5: TRxGIFAnimator; // 0x33c..0x34c barras: Energia, Ataque, Defesa, Velocidade, Especial
    Imprimir1: TMenuItem;            // 0x350  "Editar / Imprimir" (habilitado ao 1º clique na lista)
    code: TBitBtn;                   // 0x390  botão "Personagens" — Visible=False e nunca ligado
    Hora, Data: TLabel;              // 0x3c0 / 0x3c4
    Arquivo: TEdit;                  // 0x3d8  invisível: nome do GIF passado ao editor
    Ligado, Desligado: TMenuItem;    // menu Efeitos (animação das barras)
    t1, t2, t3, t4, t5: TMenuItem;   // menu Temas
    theme: TRxTrayIcon;              // ícone animado na bandeja ao minimizar
    sair: TRxGIFAnimator;            // GIF "sair" (fecha o programa)
    // ... demais componentes visuais conforme dfm/TAPKG.dfm.txt
    procedure FormCreate(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure ListBox1Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
    procedure codeClick(Sender: TObject);
    procedure Imprimir1Click(Sender: TObject);
    procedure t1Click(Sender: TObject);
    procedure t2Click(Sender: TObject);
    procedure t3Click(Sender: TObject);
    procedure t4Click(Sender: TObject);
    procedure t5Click(Sender: TObject);
    procedure LigadoClick(Sender: TObject);
    procedure DesligadoClick(Sender: TObject);
    procedure Atualiza1Click(Sender: TObject);
    procedure WebSite1Click(Sender: TObject);
    procedure Email1Click(Sender: TObject);
    procedure Proteo1Click(Sender: TObject);
    procedure AppEvents1Minimize(Sender: TObject);
    procedure AppEvents1Restore(Sender: TObject);
    procedure themeDblClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure RxGIFAnimator2Click(Sender: TObject);
    { Sobre1Click, ListadeTMseHMs1Click, ListadeitensdosPokMarts1Click,
      GoldSilver1Click, VersoAmarela1Click: todos seguem o mesmo padrão
      F := TForm.Create(Application); F.ShowModal; F.Free; }
  private
    procedure MostrarEntrada(Idx: Integer);
  end;

var
  APKG: TAPKG;

implementation

uses Inicial, Main {TMainForm "KillerGym"}, Email, Cores;

{$R *.DFM}
{$I PokeDados.inc}   // const POKEDEX: array[0..157] of TPokeEntrada  (gerado de dados/pokedex.json)

const
  DATA_DIR = 'c:\windows\data\';

// 0x4f8f00
procedure TAPKG.FormCreate(Sender: TObject);
begin
  // String única com CR entre os nomes: 150 Pokémon + Missingno + Mew (152 itens).
  ListBox1.Items.SetText('Bulbasaur'#13'Ivysaur'#13 {...} 'Mewtwo'#13'Missingno'#13'Mew');
  Hora.Caption := TimeToStr(Time);
  Data.Caption := DateToStr(Date);
end;

// 0x4f9cdc — "instalador" na primeira execução + verificação de arquivos
procedure TAPKG.FormActivate(Sender: TObject);
const
  MSG = 'O Arquivo %s não foi encontrado, no diretório da Agenda'#13 +
        'o programa pode não funcionar corretamente.';
begin
  inicial.Hide;
  if not FileExists(DATA_DIR + '1.gif')   then WinExec('press.com', SW_HIDE); // extrai DATA.GYM
  if not FileExists(DATA_DIR + '001.gif') then WinExec('img.com', SW_HIDE);   // extrai IMG.GYM
  if not FileExists('press.com') then MessageDlg(Format(MSG, ['Press.com']), mtWarning, [mbOK], 0);
  if not FileExists('data.gym')  then MessageDlg(Format(MSG, ['Data.gym']),  mtWarning, [mbOK], 0);
  if not FileExists('gym.com')   then MessageDlg(Format(MSG, ['Gym.com']),   mtWarning, [mbOK], 0);
  if not FileExists('img.gym')   then MessageDlg(Format(MSG, ['Img.gym']),   mtWarning, [mbOK], 0);
  if not FileExists('img.com')   then MessageDlg(Format(MSG, ['Img.com']),   mtWarning, [mbOK], 0);
end;

procedure TAPKG.MostrarEntrada(Idx: Integer);
var
  E: TPokeEntrada;
  procedure Barra(G: TRxGIFAnimator; Nivel: Integer);
  begin
    if Nivel = 0 then G.Image.Clear                      // personagens: barras limpas
    else G.Image.LoadFromFile(DATA_DIR + IntToStr(Nivel) + '.gif');
  end;
begin
  if (Idx < Low(POKEDEX)) or (Idx > High(POKEDEX)) then Exit;
  E := POKEDEX[Idx];
  Barra(i1, E.Energia); Barra(i2, E.Ataque); Barra(i3, E.Defesa);
  Barra(i4, E.Velocidade); Barra(i5, E.Especial);
  Edit7.Text := E.Numero;
  animator.Image.LoadFromFile(DATA_DIR + E.Sprite);
  Memo1.Lines.Text := E.Descricao;
  Edit2.Text := E.Nome;
  Edit3.Text := E.Tipo;
  Edit4.Text := E.Versao;
  Edit5.Text := E.Evolucao;
  Edit6.Text := E.Localizacao;
  movi.Lines.Text := E.Movimentos;
end;

// 0x4b9df4
procedure TAPKG.ListBox1Click(Sender: TObject);
begin
  if not Imprimir1.Enabled then Imprimir1.Enabled := True;
  if Ligado.Checked then
  begin
    i1.Animate := True; i2.Animate := True; i3.Animate := True;
    i4.Animate := True; i5.Animate := True;
  end;
  // valores "padrão" gravados antes da cadeia de ifs (sobrescritos logo depois)
  animator.Image.LoadFromFile(DATA_DIR + '001.gif');
  Memo1.Lines.Text := ''; Edit2.Text := ''; Edit3.Text := '';
  Edit4.Text := 'Azul e Vermelha';
  Edit5.Text := 'Level 16: Ivysaur / Level 32: Venusaur';
  Edit6.Text := 'Laboratório do Professor Carvalho (Cidade de Pallet)';
  movi.Lines.Text := '';
  MostrarEntrada(ListBox1.ItemIndex);  // original: ~2.200 ifs encadeados
end;

// 0x4d9668
procedure TAPKG.Edit1Change(Sender: TObject);
var
  Buf: array[0..255] of Char;
begin
  StrPCopy(Buf, Edit1.Text);
  ListBox1.ItemIndex := ListBox1.Perform(LB_FINDSTRING, 0, LongInt(@Buf));
  i1.Animate := True; i2.Animate := True; i3.Animate := True;
  i4.Animate := True; i5.Animate := True;
  // "Proteção" anti-cópia: só testa o estado de toggle da tecla PrintScreen
  // e mostra um aviso — não impede nada.
  if GetKeyState(VK_PRINT) and 1 <> 0 then
    ShowMessage('Você, não tem autorização para copiar, nenhuma imagem'#13 +
                'e informação desta PokéDex!');
  MostrarEntrada(ListBox1.ItemIndex);  // original: cópia integral da cadeia de ListBox1Click
end;

// 0x4fa784
procedure TAPKG.Timer1Timer(Sender: TObject);
begin
  Hora.Caption := TimeToStr(Time);
  Data.Caption := DateToStr(Date);
end;

// 0x4fa208 — código morto: "code" é Visible=False no DFM e nada o torna visível.
procedure TAPKG.codeClick(Sender: TObject);
begin
  ListBox1.Items.SetText('Bulbasaur'#13 {... 152 nomes ...} 'Mew'#13 +
    'Ash'#13'Brock'#13'Misty'#13'Oak'#13'Team Rocket'#13'Gary'#13);
  // 158 itens: os índices 152..157 de POKEDEX só são alcançáveis por aqui.
end;

// 0x4f9bfc — abre o editor RTF (TMainForm, "Editor - KillerGym v1.2")
procedure TAPKG.Imprimir1Click(Sender: TObject);
begin
  APKG.Arquivo.Clear;
  APKG.Arquivo.SelText := APKG.Edit7.Text;
  APKG.Arquivo.SelText := '.gif';   // ex.: '025.gif' -> usado por "Inserir > Pokémon Atual"
  MainForm := TMainForm.Create(Application);
  MainForm.ShowModal;
  MainForm.Free;
end;

{ 0x4f96f4 / 0x4f956c / 0x4f987c / 0x4f9a20 — temas.
  Cada um marca o próprio item, desmarca os outros 4 e aplica a cor de fundo
  e de fonte em ListBox1, Memo1, Edit1..Edit7 e movi. }
procedure AplicarTema(F: TAPKG; Fundo, Fonte: TColor; Marcado: TMenuItem);
var
  C: array[0..9] of TWinControl;
  K: Integer;
begin
  F.t1.Checked := Marcado = F.t1; F.t2.Checked := Marcado = F.t2;
  F.t3.Checked := Marcado = F.t3; F.t4.Checked := Marcado = F.t4;
  F.t5.Checked := False;
  C[0] := F.ListBox1; C[1] := F.Memo1; C[2] := F.Edit1; C[3] := F.Edit2; C[4] := F.Edit3;
  C[5] := F.Edit4; C[6] := F.Edit5; C[7] := F.Edit6; C[8] := F.Edit7; C[9] := F.movi;
  for K := 0 to 9 do
  begin
    TEdit(C[K]).Color := Fundo;        // acesso protegido simplificado
    TEdit(C[K]).Font.Color := Fonte;
  end;
end;

procedure TAPKG.t1Click(Sender: TObject); begin AplicarTema(Self, clWindow, clBlack, t1); end; // Branco, Preto
procedure TAPKG.t2Click(Sender: TObject); begin AplicarTema(Self, clBlack, clLime, t2); end;   // Preto, Verde
procedure TAPKG.t3Click(Sender: TObject); begin AplicarTema(Self, clRed, clWhite, t3); end;    // Vermelho, Branco
procedure TAPKG.t4Click(Sender: TObject); begin AplicarTema(Self, clBlue, clWhite, t4); end;   // Azul, Branco

// 0x4fa0c8 — "Personalizar..." abre TCores (cores salvas pelo TFormStorage)
procedure TAPKG.t5Click(Sender: TObject);
begin
  Cores := TCores.Create(Application);
  Cores.ShowModal;
  Cores.Free;
end;

procedure TAPKG.LigadoClick(Sender: TObject);    // 0x4fa974
begin Ligado.Checked := True;  Desligado.Checked := False; end;

procedure TAPKG.DesligadoClick(Sender: TObject); // 0x4fa994
begin Ligado.Checked := False; Desligado.Checked := True; end;

// 0x4fa860 — recurso falso: só exibe a mensagem
procedure TAPKG.Atualiza1Click(Sender: TObject);
begin
  MessageDlg('Você não tem autorização, para atualizar este software via internet!',
             mtInformation, [mbOK], 0);
end;

// 0x4fa800 / SiteGym1Click 0x4fa170 — caminho do IE fixo (Windows em português)
procedure TAPKG.WebSite1Click(Sender: TObject);
begin
  WinExec('c:\arquivos de programas\Internet Explorer\Iexplore.exe www.pokefight.cjb.net', SW_SHOWNORMAL);
end;

// 0x4fa74c — formulário de feedback (TNMSMTP, SMTP porta 25 sem autenticação,
// remetente/destinatário fixos no DFM de Temail)
procedure TAPKG.Email1Click(Sender: TObject);
begin
  email := Temail.Create(Application);
  email.ShowModal;
  email.Free;
end;

// 0x4fa1e8 — item "Copiar" do popup: não copia nada, só diz que copiou
procedure TAPKG.Proteo1Click(Sender: TObject);
begin
  ShowMessage('Copiado!');
end;

// 0x4f94d8 / 0x4f9508 — minimizar para a bandeja
procedure TAPKG.AppEvents1Minimize(Sender: TObject);
begin
  if FlagGlobal_4fd7fc {booleano global não identificado} then ShowWindow(Application.Handle, SW_HIDE);
  theme.Active := True;
end;

procedure TAPKG.AppEvents1Restore(Sender: TObject);
begin
  if FlagGlobal_4fd7fc then ShowWindow(Application.Handle, SW_SHOW);
  theme.Active := False;
end;

// 0x4f9538 / KillerGym1Click 0x4fa11c
procedure TAPKG.themeDblClick(Sender: TObject);
begin
  Application.Restore;
  Application.BringToFront;
end;

// 0x4fa100
procedure TAPKG.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  sair.Animate := False;
  Application.Terminate;
end;

// 0x4fa73c (GIF "sair") e Sair3Click 0x4fa1d8
procedure TAPKG.RxGIFAnimator2Click(Sender: TObject);
begin
  Application.Terminate;
end;

end.
