{ ucomum.pas - utilidades da recompilação (não existiam como unit no original).

  O original espalhava pelos handlers:
    - o caminho fixo c:\windows\data\  -> aqui DataDir (pasta "data" ao lado do EXE)
    - WinExec do Internet Explorer      -> aqui AbrirSite (navegador padrão)
    - TFormStorage gravando no registro -> aqui um .ini em %APPDATA%\PokeFightAgenda }
unit ucomum;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Graphics, Forms, IniFiles;

const
  VERSAO_ORIGINAL = '1.2';
  SITE_ORIGINAL = 'http://www.pokefight.cjb.net';
  { O site acabou; abrimos as cópias guardadas pelo Internet Archive. }
  SITE_ARQUIVADO = 'https://web.archive.org/web/2000*/pokefight.cjb.net';

function DataDir: string;                 // ...\data\  (sprites e barras)
function UiDir: string;                   // ...\data\ui\  (imagens dos forms)
procedure AbrirSite;
procedure ImprimirTexto(const Titulo: string; Linhas: TStrings; Fonte: TFont);
function Config: TIniFile;                // %APPDATA%\PokeFightAgenda\agenda.ini
procedure AjustarGroupBoxes(Form: TCustomForm);

implementation

uses
  Controls, StdCtrls, LCLIntf, Printers;

{ Duas diferenças entre o TGroupBox do Delphi 3 e o da LCL no Windows 11:
  1. o tema visual desenha o título com a cor do tema e ignora Font.Color, então
     o título branco sobre fundo preto do original fica invisível;
  2. no Delphi, as coordenadas dos filhos contam a partir da borda externa do
     GroupBox; na LCL, a partir da área cliente (abaixo do título).
  Aqui o título passa a ser um TStaticText com a fonte e a cor originais, e os filhos
  voltam para a posição que tinham no DFM. }
procedure AjustarGroupBoxes(Form: TCustomForm);
var
  I, J: Integer;
  G: TGroupBox;
  L: TStaticText;
  Externo, Cliente: TPoint;
  Filhos: array of TControl;
  Pos: array of TPoint;
begin
  for I := Form.ComponentCount - 1 downto 0 do
  begin
    if not (Form.Components[I] is TGroupBox) then Continue;
    G := TGroupBox(Form.Components[I]);
    SetLength(Filhos, G.ControlCount);
    SetLength(Pos, G.ControlCount);
    for J := 0 to G.ControlCount - 1 do
    begin
      Filhos[J] := G.Controls[J];
      Pos[J] := Point(Filhos[J].Left, Filhos[J].Top);
    end;
    if G.Caption <> '' then
    begin
      L := TStaticText.Create(Form);  // janela própria: fica por cima da borda
      L.Name := G.Name + '_Titulo';
      L.Parent := G.Parent;
      L.Font := G.Font;
      L.Caption := G.Caption;
      L.AutoSize := False;
      L.Color := G.Parent.Color;
      with TBitmap.Create do
      try
        Canvas.Font := G.Font;
        L.Width := Canvas.TextWidth(G.Caption) + 2;
        L.Height := Canvas.TextHeight(G.Caption);
      finally
        Free;
      end;
      L.Left := G.Left + 8;
      L.Top := G.Top;
      L.BringToFront;
      G.Caption := '';
    end;
    G.HandleNeeded;
    Externo := G.Parent.ClientToScreen(Point(G.Left, G.Top));
    Cliente := G.ClientOrigin;
    for J := 0 to High(Filhos) do
    begin
      Filhos[J].Left := Pos[J].X - (Cliente.X - Externo.X);
      Filhos[J].Top := Pos[J].Y - (Cliente.Y - Externo.Y);
    end;
  end;
end;

var
  FConfig: TIniFile = nil;

function DataDir: string;
begin
  Result := IncludeTrailingPathDelimiter(ExtractFilePath(Application.ExeName) + 'data');
end;

function UiDir: string;
begin
  Result := IncludeTrailingPathDelimiter(DataDir + 'ui');
end;

procedure AbrirSite;
begin
  OpenURL(SITE_ARQUIVADO);
end;

{ Substitui TRichEdit.Print / TRxRichEdit.Print: imprime texto puro paginado. }
procedure ImprimirTexto(const Titulo: string; Linhas: TStrings; Fonte: TFont);
var
  Y, LineH, Margem, I: Integer;
begin
  Printer.Title := Titulo;
  Printer.BeginDoc;
  try
    Printer.Canvas.Font.Assign(Fonte);
    Printer.Canvas.Font.Color := clBlack;
    Margem := Printer.XDPI div 2;
    LineH := Printer.Canvas.TextHeight('Áy') + 2;
    Y := Margem;
    for I := 0 to Linhas.Count - 1 do
    begin
      if Y + LineH > Printer.PageHeight - Margem then
      begin
        Printer.NewPage;
        Y := Margem;
      end;
      Printer.Canvas.TextOut(Margem, Y, Linhas[I]);
      Inc(Y, LineH);
    end;
  finally
    Printer.EndDoc;
  end;
end;

function Config: TIniFile;
var
  Dir: string;
begin
  if FConfig = nil then
  begin
    Dir := IncludeTrailingPathDelimiter(GetEnvironmentVariable('APPDATA')) + 'PokeFightAgenda';
    ForceDirectories(Dir);
    FConfig := TIniFile.Create(IncludeTrailingPathDelimiter(Dir) + 'agenda.ini');
  end;
  Result := FConfig;
end;

finalization
  FConfig.Free;

end.
