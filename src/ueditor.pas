{ ueditor.pas - "Editar / Imprimir" (TMainForm no original, título "Editor - KillerGym v1.2").

  O original era o editor RTF de demonstração da RX Library (TRxRichEdit com régua,
  barras de formatação, objetos OLE...), adaptado com dois itens no menu Inserir:
    "Pokémon Atual"     (0x4b71e8) colava o GIF do Pokémon no documento RTF;
    "Texto do Pokémon"  (0x4b72cc) acrescentava a ficha do Pokémon em texto.
  A LCL não tem RichEdit nativo, então esta versão é um editor de texto puro com
  os mesmos menus principais. "Pokémon Atual" copia a imagem para a área de
  transferência, para colar em outro programa. }
unit ueditor;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus,
  ComCtrls, PrintersDlgs;

type

  { TEditorForm }

  TEditorForm = class(TForm)
  private
    Editor: TMemo;
    Status: TStatusBar;
    OpenDialog: TOpenDialog;
    SaveDialog: TSaveDialog;
    PrintDialog: TPrintDialog;
    FontDialog: TFontDialog;
    FindDialog: TFindDialog;
    FArquivo: string;
    function Item(Pai: TMenuItem; const Cap: string; Ev: TNotifyEvent; Atalho: TShortCut = 0): TMenuItem;
    procedure Novo(Sender: TObject);
    procedure Abrir(Sender: TObject);
    procedure Salvar(Sender: TObject);
    procedure SalvarComo(Sender: TObject);
    procedure Imprimir(Sender: TObject);
    procedure Fechar(Sender: TObject);
    procedure Desfazer(Sender: TObject);
    procedure Recortar(Sender: TObject);
    procedure Copiar(Sender: TObject);
    procedure Colar(Sender: TObject);
    procedure SelecionarTudo(Sender: TObject);
    procedure Localizar(Sender: TObject);
    procedure LocalizarProximo(Sender: TObject);
    procedure Achar(Sender: TObject);
    procedure Fonte(Sender: TObject);
    procedure PokemonAtual(Sender: TObject);
    procedure TextoDoPokemon(Sender: TObject);
    procedure Sobre(Sender: TObject);
    procedure AtualizarTitulo;
  public
    constructor Create(AOwner: TComponent); override;
  end;

implementation

uses
  LCLType, LazUTF8, Clipbrd, ucomum, uapkg, usobre, ugifplayer;

const
  TITULO = 'Editor - KillerGym v1.2';

constructor TEditorForm.Create(AOwner: TComponent);
var
  M: TMainMenu;
  Arq, Ed, Ins, Fmt, Aj: TMenuItem;
begin
  inherited CreateNew(AOwner, 0);
  Width := 640;
  Height := 480;
  Position := poScreenCenter;
  M := TMainMenu.Create(Self);
  Menu := M;
  Arq := Item(M.Items, '&Arquivo', nil);
  Item(Arq, '&Novo', @Novo, ShortCut(VK_N, [ssCtrl]));
  Item(Arq, 'A&brir...', @Abrir, ShortCut(VK_O, [ssCtrl]));
  Item(Arq, '&Salvar', @Salvar, ShortCut(VK_S, [ssCtrl]));
  Item(Arq, 'Salvar &Como...', @SalvarComo);
  Item(Arq, '-', nil);
  Item(Arq, '&Imprimir', @Imprimir, ShortCut(VK_P, [ssCtrl]));
  Item(Arq, '-', nil);
  Item(Arq, '&Fechar', @Fechar, ShortCut(VK_X, [ssAlt]));
  Ed := Item(M.Items, '&Editar', nil);
  Item(Ed, '&Desfazer', @Desfazer, ShortCut(VK_Z, [ssCtrl]));
  Item(Ed, '-', nil);
  Item(Ed, 'Rec&ortar', @Recortar, ShortCut(VK_X, [ssCtrl]));
  Item(Ed, 'Co&piar', @Copiar, ShortCut(VK_C, [ssCtrl]));
  Item(Ed, 'Co&lar', @Colar, ShortCut(VK_V, [ssCtrl]));
  Item(Ed, 'Selecionar &Tudo', @SelecionarTudo, ShortCut(VK_A, [ssCtrl]));
  Item(Ed, '-', nil);
  Item(Ed, 'Locali&zar...', @Localizar, ShortCut(VK_F, [ssCtrl]));
  Item(Ed, 'Localizar Pró&ximo', @LocalizarProximo, ShortCut(VK_F3, []));
  Ins := Item(M.Items, '&Inserir', nil);
  Item(Ins, 'Po&kémon Atual', @PokemonAtual);
  Item(Ins, 'Texto do &Pokémon', @TextoDoPokemon);
  Fmt := Item(M.Items, 'F&ormatar', nil);
  Item(Fmt, '&Fonte...', @Fonte);
  Aj := Item(M.Items, 'Aj&uda', nil);
  Item(Aj, '&Sobre...', @Sobre);

  Status := TStatusBar.Create(Self);
  Status.Parent := Self;
  Status.SimplePanel := True;
  Editor := TMemo.Create(Self);
  Editor.Parent := Self;
  Editor.Align := alClient;
  Editor.ScrollBars := ssBoth;
  Editor.WantTabs := True;
  Editor.Font.Name := 'Arial';
  Editor.Font.Size := 10;

  OpenDialog := TOpenDialog.Create(Self);
  OpenDialog.Filter := 'Texto (*.txt)|*.txt|Todos os arquivos (*.*)|*.*';
  SaveDialog := TSaveDialog.Create(Self);
  SaveDialog.Filter := OpenDialog.Filter;
  SaveDialog.DefaultExt := 'txt';
  SaveDialog.Options := SaveDialog.Options + [ofOverwritePrompt];
  PrintDialog := TPrintDialog.Create(Self);
  FontDialog := TFontDialog.Create(Self);
  FindDialog := TFindDialog.Create(Self);
  FindDialog.OnFind := @Achar;
  FindDialog.Options := [frDown, frHideWholeWord, frHideUpDown];
  AtualizarTitulo;
end;

function TEditorForm.Item(Pai: TMenuItem; const Cap: string; Ev: TNotifyEvent; Atalho: TShortCut): TMenuItem;
begin
  Result := TMenuItem.Create(Self);
  Result.Caption := Cap;
  Result.OnClick := Ev;
  Result.ShortCut := Atalho;
  Pai.Add(Result);
end;

procedure TEditorForm.AtualizarTitulo;
begin
  if FArquivo = '' then Caption := TITULO + ' - [Sem título]'
  else Caption := TITULO + ' - [' + ExtractFileName(FArquivo) + ']';
end;

procedure TEditorForm.Novo(Sender: TObject);
begin
  Editor.Clear;
  FArquivo := '';
  AtualizarTitulo;
end;

procedure TEditorForm.Abrir(Sender: TObject);
begin
  if OpenDialog.Execute then
  begin
    Editor.Lines.LoadFromFile(OpenDialog.FileName);
    FArquivo := OpenDialog.FileName;
    AtualizarTitulo;
  end;
end;

procedure TEditorForm.Salvar(Sender: TObject);
begin
  if FArquivo = '' then
    SalvarComo(Sender)
  else
    Editor.Lines.SaveToFile(FArquivo);
end;

procedure TEditorForm.SalvarComo(Sender: TObject);
begin
  if SaveDialog.Execute then
  begin
    FArquivo := SaveDialog.FileName;
    Editor.Lines.SaveToFile(FArquivo);
    AtualizarTitulo;
  end;
end;

procedure TEditorForm.Imprimir(Sender: TObject);
begin
  if PrintDialog.Execute then
    ImprimirTexto(Caption, Editor.Lines, Editor.Font);
end;

procedure TEditorForm.Fechar(Sender: TObject);
begin
  Close;
end;

procedure TEditorForm.Desfazer(Sender: TObject);
begin
  Editor.Undo;
end;

procedure TEditorForm.Recortar(Sender: TObject);
begin
  Editor.CutToClipboard;
end;

procedure TEditorForm.Copiar(Sender: TObject);
begin
  Editor.CopyToClipboard;
end;

procedure TEditorForm.Colar(Sender: TObject);
begin
  Editor.PasteFromClipboard;
end;

procedure TEditorForm.SelecionarTudo(Sender: TObject);
begin
  Editor.SelectAll;
end;

procedure TEditorForm.Localizar(Sender: TObject);
begin
  FindDialog.Execute;
end;

procedure TEditorForm.LocalizarProximo(Sender: TObject);
begin
  if FindDialog.FindText = '' then Localizar(Sender) else Achar(Sender);
end;

procedure TEditorForm.Achar(Sender: TObject);
var
  P: Integer;
  Texto, Busca: string;
begin
  Texto := Editor.Text;
  Busca := FindDialog.FindText;
  if not (frMatchCase in FindDialog.Options) then
  begin
    Texto := UTF8LowerCase(Texto);
    Busca := UTF8LowerCase(Busca);
  end;
  P := Pos(Busca, Copy(Texto, Editor.SelStart + Editor.SelLength + 1, MaxInt));
  if P = 0 then
  begin
    Status.SimpleText := 'Texto não encontrado: ' + FindDialog.FindText;
    Exit;
  end;
  Editor.SelStart := Editor.SelStart + Editor.SelLength + P - 1;
  Editor.SelLength := Length(Busca);
  Status.SimpleText := '';
end;

procedure TEditorForm.Fonte(Sender: TObject);
begin
  FontDialog.Font := Editor.Font;
  if FontDialog.Execute then Editor.Font := FontDialog.Font;
end;

// 0x4b71e8 - o original colava o GIF no documento RTF
procedure TEditorForm.PokemonAtual(Sender: TObject);
var
  G: TGifFrames;
begin
  G := TGifFrames.Create;
  try
    if FileExists(DataDir + APKG.Arquivo.Text) then
      G.LoadFromFile(DataDir + APKG.Arquivo.Text);
    if G.Count = 0 then
    begin
      Status.SimpleText := 'Nenhum Pokémon selecionado.';
      Exit;
    end;
    Clipboard.Assign(G.Frames[0]);
    Status.SimpleText := 'Imagem de ' + APKG.Edit2.Text +
      ' copiada para a área de transferência (este editor é só de texto).';
  finally
    G.Free;
  end;
end;

// 0x4b72cc - mesmas linhas, na mesma ordem, do original
procedure TEditorForm.TextoDoPokemon(Sender: TObject);
begin
  Editor.Lines.Add('Pokémon: ' + APKG.Edit2.Text);
  Editor.Lines.Add('Tipo: ' + APKG.Edit3.Text);
  Editor.Lines.Add('Versão: ' + APKG.Edit4.Text);
  Editor.Lines.Add('Evolução: ' + APKG.Edit5.Text);
  Editor.Lines.Add('Localização: ' + APKG.Edit6.Text);
  Editor.Lines.Add('');
  Editor.Lines.Add('Sobre o pokémon: ' + APKG.Memo1.Text);
  Editor.Lines.Add('');
  Editor.Lines.Add('Movimentos: ' + APKG.movi.Text);
end;

procedure TEditorForm.Sobre(Sender: TObject);
var
  F: Tabout;
begin
  F := Tabout.Create(Self);
  try
    F.ShowModal;
  finally
    F.Free;
  end;
end;

end.
