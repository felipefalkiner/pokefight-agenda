{ uapkg.pas - a Pokédex (form TAPKG), recompilada para Lazarus.

  Porte de PokéFight1.2.exe (Delphi 3, jan/2000). Cada handler traz o endereço
  do original para conferir com analysis/decompilado/TAPKG.<handler>.c.
  O layout (uapkg.lfm) foi gerado do DFM original por tools/dfm2lfm.py.

  Diferenças em relação ao original (detalhes em docs/RECOMPILACAO.md):
    * ListBox1Click/Edit1Change: as ~2.200 linhas "if ItemIndex = N" viraram uma
      tabela (upokedados.pas) aplicada por MostrarEntrada;
    * os GIFs são tocados por TGifPlayer (ugifplayer.pas) no lugar do TRxGIFAnimator;
    * TFormStorage (registro) -> ucomum.Config (.ini);
    * o e-mail SMTP e o site original não existem mais (ver Email1Click/WebSite1Click);
    * Ctrl+Shift+P mostra o botão "Personagens", que existia mas nunca aparecia. }
unit uapkg;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, ExtCtrls,
  Menus, Buttons, LCLType, ugifplayer, upokedados;

type

  { TAPKG }

  TAPKG = class(TForm)
    Gif: TImage;
    RxGIFAnimator1: TImage;
    sair: TImage;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label6: TLabel;
    i1: TImage;
    i2: TImage;
    i3: TImage;
    i4: TImage;
    i5: TImage;
    nn: TLabel;
    animator: TImage;
    Label1: TLabel;
    Label5: TLabel;
    Label12: TLabel;
    Label13: TLabel;
    Label15: TLabel;
    Label14: TLabel;
    Hora: TLabel;
    Data: TLabel;
    Image1: TImage;
    Arquivo: TEdit;
    full: TEdit;
    GroupBox1: TGroupBox;
    GroupBox2: TGroupBox;
    Edit1: TEdit;
    ListBox1: TListBox;
    Memo1: TMemo;
    GroupBox3: TGroupBox;
    movi: TMemo;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Edit5: TEdit;
    Edit6: TEdit;
    Edit7: TEdit;
    code: TBitBtn;
    Panel1: TPanel;
    MainMenu1: TMainMenu;
    Arquivo1: TMenuItem;
    ListadeTMseHMs1: TMenuItem;
    ListadeitensdosPokMarts1: TMenuItem;
    N5: TMenuItem;
    Imprimir1: TMenuItem;
    N1: TMenuItem;
    Sair1: TMenuItem;
    Dicas1: TMenuItem;
    Cdigos1: TMenuItem;
    VersoAmarela1: TMenuItem;
    GoldSilver1: TMenuItem;
    Efeitos1: TMenuItem;
    Ligado: TMenuItem;
    Desligado: TMenuItem;
    Internet1: TMenuItem;
    Email1: TMenuItem;
    WebSite1: TMenuItem;
    N3: TMenuItem;
    Atualiza1: TMenuItem;
    Cor1: TMenuItem;
    t1: TMenuItem;
    t2: TMenuItem;
    t3: TMenuItem;
    t4: TMenuItem;
    N4: TMenuItem;
    t5: TMenuItem;
    Sobre1: TMenuItem;
    MenuBandeja: TPopupMenu;  // "Menu" no original (conflita com TForm.Menu no FPC)
    KillerGym1: TMenuItem;
    Sobre2: TMenuItem;
    SiteGym1: TMenuItem;
    N2: TMenuItem;
    Sair2: TMenuItem;
    SairPop: TPopupMenu;
    Proteo1: TMenuItem;
    Sair3: TMenuItem;
    Timer1: TTimer;
    procedure AppEvents1Activate(Sender: TObject);
    procedure Atualiza1Click(Sender: TObject);
    procedure DesligadoClick(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure Email1Click(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure FormClose(Sender: TObject; var CloseAction: TCloseAction);
    procedure FormCreate(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
    procedure GoldSilver1Click(Sender: TObject);
    procedure Imprimir1Click(Sender: TObject);
    procedure KillerGym1Click(Sender: TObject);
    procedure LigadoClick(Sender: TObject);
    procedure ListBox1Click(Sender: TObject);
    procedure ListadeTMseHMs1Click(Sender: TObject);
    procedure ListadeitensdosPokMarts1Click(Sender: TObject);
    procedure Proteo1Click(Sender: TObject);
    procedure RxGIFAnimator2Click(Sender: TObject);
    procedure Sair1Click(Sender: TObject);
    procedure Sair2Click(Sender: TObject);
    procedure Sair3Click(Sender: TObject);
    procedure SiteGym1Click(Sender: TObject);
    procedure Sobre1Click(Sender: TObject);
    procedure Sobre2Click(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
    procedure VersoAmarela1Click(Sender: TObject);
    procedure WebSite1Click(Sender: TObject);
    procedure codeClick(Sender: TObject);
    procedure t1Click(Sender: TObject);
    procedure t2Click(Sender: TObject);
    procedure t3Click(Sender: TObject);
    procedure t4Click(Sender: TObject);
    procedure t5Click(Sender: TObject);
  private
    FSprite: TGifPlayer;
    FBarras: array[TBarra] of TGifPlayer;
    FTray: TTrayIcon;
    procedure MostrarEntrada(Idx: Integer);
    procedure AnimarBarras;
    procedure AplicarTema(Fundo, Fonte: TColor; Marcado: TMenuItem);
    procedure MarcarTema(Marcado: TMenuItem);
    procedure CarregarConfig;
    procedure SalvarConfig;
    procedure CriarBandeja;
    procedure FormWindowStateChange(Sender: TObject);
    procedure FormKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
    procedure MostrarModal(AClass: TFormClass);
  public
    procedure AplicarCoresPersonalizadas(Form, Campo, FonteCampo, Rotulo: TColor);
    function CamposColoridos: TList;
    function RotulosColoridos: TList;
  end;

var
  APKG: TAPKG;

implementation

uses
  LCLIntf, Clipbrd, StrUtils, ucomum, usobre, utms, umarts, ugold, uyellow, ucores, ueditor;

{$R *.lfm}

const
  MSG_FALTA = 'O Arquivo %s não foi encontrado, no diretório da Agenda'#13 +
              'o programa pode não funcionar corretamente.';

{ ------------------------------------------------------------------ criação }

// 0x4f8f00
procedure TAPKG.FormCreate(Sender: TObject);
var
  B: TBarra;
  Img: array[TBarra] of TImage;
  I: Integer;
begin
  ListBox1.Items.BeginUpdate;
  for I := Low(LISTA_POKEMON) to High(LISTA_POKEMON) do
    ListBox1.Items.Add(LISTA_POKEMON[I]);
  ListBox1.Items.EndUpdate;
  Hora.Caption := TimeToStr(Time);
  Data.Caption := DateToStr(Date);

  // TRxGIFAnimator -> TGifPlayer (o original tinha Loop = False nas barras e no "Sair")
  FSprite := TGifPlayer.Create(Self, animator);
  Img[bEnergia] := i1; Img[bAtaque] := i2; Img[bDefesa] := i3;
  Img[bVelocidade] := i4; Img[bEspecial] := i5;
  for B := Low(TBarra) to High(TBarra) do
    FBarras[B] := TGifPlayer.Create(Self, Img[B], False);

  // imagens que no original vinham embutidas no DFM
  if FileExists(UiDir + 'apkg_header.gif') then TGifPlayer.Create(Self, Gif).LoadFromFile(UiDir + 'apkg_header.gif');
  if FileExists(UiDir + 'apkg_titulo.gif') then TGifPlayer.Create(Self, RxGIFAnimator1).LoadFromFile(UiDir + 'apkg_titulo.gif');
  if FileExists(UiDir + 'apkg_sair.gif') then TGifPlayer.Create(Self, sair, False).LoadFromFile(UiDir + 'apkg_sair.gif');
  if FileExists(UiDir + 'apkg_logo.jpg') then Image1.Picture.LoadFromFile(UiDir + 'apkg_logo.jpg');
  if FileExists(UiDir + 'apkg.ico') then Icon.LoadFromFile(UiDir + 'apkg.ico');

  AjustarGroupBoxes(Self);

  // Ligado/Desligado não vêm marcados no DFM; o TFormStorage restaurava o estado salvo
  CarregarConfig;
  CriarBandeja;
  OnWindowStateChange := @FormWindowStateChange;
  KeyPreview := True;
  OnKeyDown := @FormKeyDown;
  ShowInTaskBar := stAlways;
end;

// 0x4f9cdc - no original também disparava press.com/img.com (extração para
// c:\windows\data). Aqui os dados já vêm extraídos na pasta data\.
procedure TAPKG.FormActivate(Sender: TObject);
const
  Necessarios: array[0..1] of string = ('1.gif', '001.gif');
var
  F: string;
begin
  for F in Necessarios do
    if not FileExists(DataDir + F) then
    begin
      MessageDlg(Format(MSG_FALTA, ['data\' + F]), mtWarning, [mbOK], 0);
      Break;
    end;
end;

// 0x4f9554
procedure TAPKG.FormDestroy(Sender: TObject);
begin
  SalvarConfig;
end;

// 0x4fa100
procedure TAPKG.FormClose(Sender: TObject; var CloseAction: TCloseAction);
begin
  Application.Terminate;
end;

{ ------------------------------------------------------------------ Pokédex }

{ Equivalente às cadeias de "if ListBox1.ItemIndex = N then ..." do original. }
procedure TAPKG.MostrarEntrada(Idx: Integer);
var
  E: TPokeEntrada;
  B: TBarra;
begin
  if (Idx < Low(POKEDEX)) or (Idx > High(POKEDEX)) then Exit;
  E := POKEDEX[Idx];
  for B := Low(TBarra) to High(TBarra) do
    if E.Barras[B] = 0 then
      FBarras[B].Clear                       // personagens: TGIFImage.Clear
    else
      FBarras[B].LoadFromFile(DataDir + IntToStr(E.Barras[B]) + '.gif');
  Edit7.Text := E.Numero;
  FSprite.LoadFromFile(DataDir + E.Sprite);
  Memo1.Lines.Text := E.Descricao;
  Edit2.Text := E.Nome;
  Edit3.Text := E.Tipo;
  Edit4.Text := E.Versao;
  Edit5.Text := E.Evolucao;
  Edit6.Text := E.Localizacao;
  movi.Lines.Text := E.Movimentos;
end;

procedure TAPKG.AnimarBarras;
var
  B: TBarra;
begin
  for B := Low(TBarra) to High(TBarra) do
    FBarras[B].Animate := True;
end;

// 0x4b9df4
procedure TAPKG.ListBox1Click(Sender: TObject);
begin
  if not Imprimir1.Enabled then Imprimir1.Enabled := True;
  if Ligado.Checked then AnimarBarras;
  // valores gravados antes da cadeia de ifs no original
  FSprite.LoadFromFile(DataDir + PADRAO_SPRITE);
  Memo1.Clear;
  Edit2.Text := '';
  Edit3.Text := '';
  Edit4.Text := PADRAO_VERSAO;
  Edit5.Text := PADRAO_EVOLUCAO;
  Edit6.Text := PADRAO_LOCALIZACAO;
  movi.Clear;
  MostrarEntrada(ListBox1.ItemIndex);
end;

{ LB_FINDSTRING: primeiro item que começa com o texto, sem diferenciar maiúsculas. }
function FindPrefix(Items: TStrings; const S: string): Integer;
var
  I: Integer;
begin
  for I := 0 to Items.Count - 1 do
    if AnsiStartsText(S, Items[I]) then Exit(I);
  Result := -1;
end;

// 0x4d9668
procedure TAPKG.Edit1Change(Sender: TObject);
begin
  ListBox1.ItemIndex := FindPrefix(ListBox1.Items, Edit1.Text);
  AnimarBarras; // o original animava aqui mesmo com "Efeitos > Desligado"
  // "Proteção" original: só testa o estado de toggle do PrintScreen.
  if GetKeyState(VK_SNAPSHOT) and 1 <> 0 then
    ShowMessage('Você, não tem autorização para copiar, nenhuma imagem'#13 +
                'e informação desta PokéDex!');
  MostrarEntrada(ListBox1.ItemIndex);
end;

// 0x4fa784
procedure TAPKG.Timer1Timer(Sender: TObject);
begin
  Hora.Caption := TimeToStr(Time);
  Data.Caption := DateToStr(Date);
end;

// 0x4fa208 - botão "Personagens": Visible = False no original e nunca exibido.
procedure TAPKG.codeClick(Sender: TObject);
var
  I: Integer;
begin
  ListBox1.Items.BeginUpdate;
  ListBox1.Items.Clear;
  for I := Low(LISTA_COM_PERSONAGENS) to High(LISTA_COM_PERSONAGENS) do
    ListBox1.Items.Add(LISTA_COM_PERSONAGENS[I]);
  ListBox1.Items.EndUpdate;
end;

{ Novidade da recompilação: Ctrl+Shift+P revela o botão "Personagens". }
procedure TAPKG.FormKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
begin
  if (Key = VK_P) and (Shift = [ssCtrl, ssShift]) then
  begin
    code.Visible := not code.Visible;
    if code.Visible then code.BringToFront;
    Key := 0;
  end;
end;

{ ------------------------------------------------------------------ temas }

procedure TAPKG.MarcarTema(Marcado: TMenuItem);
begin
  t1.Checked := Marcado = t1;
  t2.Checked := Marcado = t2;
  t3.Checked := Marcado = t3;
  t4.Checked := Marcado = t4;
  t5.Checked := Marcado = t5;
end;

function TAPKG.CamposColoridos: TList;
begin
  Result := TList.Create;
  Result.Add(ListBox1); Result.Add(Memo1); Result.Add(Edit1); Result.Add(Edit2);
  Result.Add(Edit3); Result.Add(Edit4); Result.Add(Edit5); Result.Add(Edit6);
  Result.Add(Edit7); Result.Add(movi);
end;

function TAPKG.RotulosColoridos: TList;
begin
  Result := TList.Create;
  Result.Add(nn); Result.Add(Label6); Result.Add(Label2); Result.Add(Label3);
  Result.Add(Label4); Result.Add(Label1); Result.Add(Label5); Result.Add(Label12);
  Result.Add(Label13); Result.Add(Label15); Result.Add(Label14); Result.Add(GroupBox1);
  Result.Add(GroupBox2); Result.Add(GroupBox3);
end;

// 0x4f96f4 / 0x4f956c / 0x4f987c / 0x4f9a20
procedure TAPKG.AplicarTema(Fundo, Fonte: TColor; Marcado: TMenuItem);
var
  L: TList;
  I: Integer;
begin
  MarcarTema(Marcado);
  L := CamposColoridos;
  try
    for I := 0 to L.Count - 1 do
    begin
      TControl(L[I]).Color := Fundo;
      TControl(L[I]).Font.Color := Fonte;
    end;
  finally
    L.Free;
  end;
end;

{ TCores.BitBtn1Click (0x4a3014) aplicava estas quatro cores. }
procedure TAPKG.AplicarCoresPersonalizadas(Form, Campo, FonteCampo, Rotulo: TColor);
var
  L: TList;
  I: Integer;
begin
  MarcarTema(t5);
  Color := Form;
  L := CamposColoridos;
  try
    for I := 0 to L.Count - 1 do
    begin
      TControl(L[I]).Color := Campo;
      TControl(L[I]).Font.Color := FonteCampo;
    end;
  finally
    L.Free;
  end;
  L := RotulosColoridos;
  try
    for I := 0 to L.Count - 1 do
      TControl(L[I]).Font.Color := Rotulo;
  finally
    L.Free;
  end;
  // títulos dos GroupBoxes (ver ucomum.AjustarGroupBoxes)
  for I := 0 to ComponentCount - 1 do
    if (Components[I] is TStaticText) and (Pos('_Titulo', Components[I].Name) > 0) then
    begin
      TStaticText(Components[I]).Font.Color := Rotulo;
      TStaticText(Components[I]).Color := Form;
    end;
end;

procedure TAPKG.t1Click(Sender: TObject);
begin
  AplicarTema(clWindow, clBlack, t1);   // Branco, Preto
end;

procedure TAPKG.t2Click(Sender: TObject);
begin
  AplicarTema(clBlack, clLime, t2);     // Preto, Verde
end;

procedure TAPKG.t3Click(Sender: TObject);
begin
  AplicarTema(clRed, clWhite, t3);      // Vermelho, Branco
end;

procedure TAPKG.t4Click(Sender: TObject);
begin
  AplicarTema(clBlue, clWhite, t4);     // Azul, Branco
end;

// 0x4fa0c8
procedure TAPKG.t5Click(Sender: TObject);
begin
  MostrarModal(TCores);
end;

{ ------------------------------------------------------------------ menus }

procedure TAPKG.MostrarModal(AClass: TFormClass);
var
  F: TForm;
begin
  F := AClass.Create(Application);
  try
    F.ShowModal;
  finally
    F.Free;
  end;
end;

procedure TAPKG.ListadeTMseHMs1Click(Sender: TObject);        // 0x4fa904
begin
  MostrarModal(Ttm);
end;

procedure TAPKG.ListadeitensdosPokMarts1Click(Sender: TObject); // 0x4fa8cc
begin
  MostrarModal(TMarts);
end;

procedure TAPKG.GoldSilver1Click(Sender: TObject);            // 0x4fa93c
begin
  MostrarModal(TGold);
end;

procedure TAPKG.VersoAmarela1Click(Sender: TObject);          // 0x4f9bc4
begin
  MostrarModal(Tyellow);
end;

procedure TAPKG.Sobre1Click(Sender: TObject);                 // 0x4f9494
begin
  MostrarModal(Tabout);
end;

procedure TAPKG.Sobre2Click(Sender: TObject);                 // 0x4fa138
begin
  MostrarModal(Tabout);
end;

// 0x4f9bfc - "Editar / Imprimir": abre o editor com o Pokémon atual
procedure TAPKG.Imprimir1Click(Sender: TObject);
begin
  Arquivo.Text := Edit7.Text + '.gif';
  MostrarModal(TEditorForm);
end;

procedure TAPKG.AppEvents1Activate(Sender: TObject);
begin
  // vazio no original (0x4f94d4); ligado ao clique no menu "Dicas"
end;

procedure TAPKG.LigadoClick(Sender: TObject);                 // 0x4fa974
begin
  Ligado.Checked := True;
  Desligado.Checked := False;
end;

procedure TAPKG.DesligadoClick(Sender: TObject);              // 0x4fa994
begin
  Ligado.Checked := False;
  Desligado.Checked := True;
end;

// 0x4fa74c - o original abria um form que mandava e-mail por SMTP (porta 25,
// sem autenticação) para o servidor do autor, que não existe mais.
procedure TAPKG.Email1Click(Sender: TObject);
begin
  MessageDlg('E-mail',
    'Na versão original, esta opção abria um formulário que enviava sugestões ' +
    'por SMTP direto para o servidor do autor (2000). O servidor não existe mais, ' +
    'por isso o recurso foi desativado nesta recompilação.' + LineEnding + LineEnding +
    'Veja docs/RECOMPILACAO.md para os detalhes do formulário original.',
    mtInformation, [mbOK], 0);
end;

// 0x4fa800 / 0x4fa170 - o site acabou: abre as cópias do Internet Archive
procedure TAPKG.WebSite1Click(Sender: TObject);
begin
  AbrirSite;
end;

procedure TAPKG.SiteGym1Click(Sender: TObject);
begin
  AbrirSite;
end;

// 0x4fa860 - recurso falso no original; mantido como era
procedure TAPKG.Atualiza1Click(Sender: TObject);
begin
  MessageDlg('Você não tem autorização, para atualizar este software via internet!',
             mtInformation, [mbOK], 0);
end;

// 0x4fa1e8 - no original só mostrava "Copiado!". Aqui também copia de fato.
procedure TAPKG.Proteo1Click(Sender: TObject);
var
  C: TComponent;
begin
  C := SairPop.PopupComponent;
  if C is TCustomEdit then
  begin
    if TCustomEdit(C).SelLength > 0 then
      TCustomEdit(C).CopyToClipboard
    else
      Clipboard.AsText := TCustomEdit(C).Text;
  end;
  ShowMessage('Copiado!');
end;

procedure TAPKG.RxGIFAnimator2Click(Sender: TObject);         // 0x4fa73c
begin
  Application.Terminate;
end;

procedure TAPKG.Sair1Click(Sender: TObject);                  // 0x4f948c
begin
  Close;
end;

procedure TAPKG.Sair2Click(Sender: TObject);                  // 0x4fa1d0
begin
  Close;
end;

procedure TAPKG.Sair3Click(Sender: TObject);                  // 0x4fa1d8
begin
  Application.Terminate;
end;

{ ------------------------------------------------------------------ bandeja }

// TRxTrayIcon "theme": 12 ícones animados a cada 200 ms, só enquanto minimizado
procedure TAPKG.CriarBandeja;
var
  Lista: TImageList;
  Ico: TIcon;
  I: Integer;
  F: string;
begin
  FTray := TTrayIcon.Create(Self);
  FTray.Hint := 'Agenda Pokémon da Poké Fight';
  FTray.PopUpMenu := MenuBandeja;
  FTray.OnDblClick := @KillerGym1Click;
  Lista := TImageList.Create(Self);
  Lista.Width := 32;
  Lista.Height := 32;
  for I := 0 to 11 do
  begin
    F := Format('%stray_%.2d.ico', [UiDir, I]);
    if not FileExists(F) then Continue;
    Ico := TIcon.Create;
    try
      Ico.LoadFromFile(F);
      Lista.AddIcon(Ico);
      if I = 0 then FTray.Icon.Assign(Ico);
    finally
      Ico.Free;
    end;
  end;
  FTray.Icons := Lista;
  FTray.AnimateInterval := 200;
end;

// AppEvents1Minimize (0x4f94d8) / AppEvents1Restore (0x4f9508)
procedure TAPKG.FormWindowStateChange(Sender: TObject);
begin
  if WindowState = wsMinimized then
  begin
    WindowState := wsNormal;
    Hide;
    FTray.Visible := True;
    FTray.Animate := FTray.Icons.Count > 1;
  end;
end;

// themeDblClick (0x4f9538) / KillerGym1Click (0x4fa11c)
procedure TAPKG.KillerGym1Click(Sender: TObject);
begin
  FTray.Animate := False;
  FTray.Visible := False;
  Show;
  WindowState := wsNormal;
  Application.BringToFront;
end;

{ ------------------------------------------------------------------ config }

procedure TAPKG.CarregarConfig;
var
  Tema: Integer;
begin
  if Config.ReadBool('Efeitos', 'Ligado', False) then LigadoClick(nil)
  else if Config.ValueExists('Efeitos', 'Ligado') then DesligadoClick(nil);
  Tema := Config.ReadInteger('Temas', 'Tema', 0);
  case Tema of
    1: t1Click(nil);
    2: t2Click(nil);
    3: t3Click(nil);
    4: t4Click(nil);
    5: AplicarCoresPersonalizadas(
         TColor(Config.ReadInteger('Temas', 'Form', Color)),
         TColor(Config.ReadInteger('Temas', 'Campo', clWindow)),
         TColor(Config.ReadInteger('Temas', 'FonteCampo', clBlack)),
         TColor(Config.ReadInteger('Temas', 'Rotulo', clWhite)));
  end;
end;

procedure TAPKG.SalvarConfig;
var
  Tema: Integer;
begin
  if Ligado.Checked or Desligado.Checked then
    Config.WriteBool('Efeitos', 'Ligado', Ligado.Checked);
  Tema := 0;
  if t1.Checked then Tema := 1 else if t2.Checked then Tema := 2
  else if t3.Checked then Tema := 3 else if t4.Checked then Tema := 4
  else if t5.Checked then Tema := 5;
  Config.WriteInteger('Temas', 'Tema', Tema);
  if Tema = 5 then
  begin
    Config.WriteInteger('Temas', 'Form', Color);
    Config.WriteInteger('Temas', 'Campo', Edit2.Color);
    Config.WriteInteger('Temas', 'FonteCampo', Edit2.Font.Color);
    Config.WriteInteger('Temas', 'Rotulo', Label1.Font.Color);
  end;
  Config.UpdateFile;
end;

end.
