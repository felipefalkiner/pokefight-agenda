{ ugold.pas - "Guia completo de Gold/Silver" (form TGold). O texto está no
  próprio form (Lines.Strings do DFM original, convertido para ugold.lfm). }
unit ugold;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Buttons,
  Menus, PrintersDlgs;

type

  { TGold }

  TGold = class(TForm)
    BitBtn1: TBitBtn;
    RichEdit1: TMemo;
    MainMenu1: TMainMenu;
    Arquivo1: TMenuItem;
    Imprimir1: TMenuItem;
    N1: TMenuItem;
    Sair1: TMenuItem;
    Formatar1: TMenuItem;
    Fonte1: TMenuItem;
    PrintDialog1: TPrintDialog;
    FontDialog1: TFontDialog;
    procedure BitBtn1Click(Sender: TObject);
    procedure Fonte1Click(Sender: TObject);
    procedure Imprimir1Click(Sender: TObject);
    procedure Sair1Click(Sender: TObject);
  end;

implementation

uses
  ucomum;

{$R *.lfm}

procedure TGold.BitBtn1Click(Sender: TObject);   // 0x4b9218
begin
  Close;
end;

procedure TGold.Fonte1Click(Sender: TObject);    // 0x4b9284
begin
  FontDialog1.Font := RichEdit1.Font;
  if FontDialog1.Execute then
    RichEdit1.Font := FontDialog1.Font;
end;

procedure TGold.Imprimir1Click(Sender: TObject); // 0x4b9220: RichEdit1.Print(Caption)
begin
  if PrintDialog1.Execute then
    ImprimirTexto(Caption, RichEdit1.Lines, RichEdit1.Font);
end;

procedure TGold.Sair1Click(Sender: TObject);     // 0x4b92ac
begin
  Close;
end;

end.
