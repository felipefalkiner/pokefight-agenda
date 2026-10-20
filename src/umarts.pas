{ umarts.pas - "Lista de itens dos Poké-Marts" (form TMarts). }
unit umarts;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, StdCtrls, Buttons;

type

  { TMarts }

  TMarts = class(TForm)
    GroupBox1: TGroupBox;
    ComboBox1: TComboBox;
    GroupBox2: TGroupBox;
    Memo1: TMemo;
    BitBtn1: TBitBtn;
    procedure BitBtn1Click(Sender: TObject);
    procedure ComboBox1Click(Sender: TObject);
    procedure FormActivate(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
  end;

implementation

uses
  ucomum, uextras, uapkg;

{$R *.lfm}

constructor TMarts.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  AjustarGroupBoxes(Self);
end;

procedure TMarts.BitBtn1Click(Sender: TObject);   // 0x4b7788
begin
  Close;
end;

procedure TMarts.ComboBox1Click(Sender: TObject); // 0x4b7790
var
  I: Integer;
begin
  I := ComboBox1.ItemIndex;
  if (I >= Low(MART_ITENS)) and (I <= High(MART_ITENS)) then
    Memo1.Lines.Text := MART_ITENS[I];
end;

procedure TMarts.FormActivate(Sender: TObject);   // 0x4b8220: segue a cor da Agenda
begin
  Color := APKG.Color;
  // a fonte monoespaçada mantém os preços alinhados como no Windows 98
  Memo1.Font.Name := 'Courier New';
end;

end.
