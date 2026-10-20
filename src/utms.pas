{ utms.pas - "Lista de TM's e HM's" (form Ttm). Os nomes vêm do DFM (uTms.lfm);
  as localizações vinham de cadeias de ifs em ListBox1Click/ListBox2Click. }
unit utms;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, StdCtrls, ExtCtrls;

type

  { Ttm }

  Ttm = class(TForm)
    Image1: TImage;
    GroupBox1: TGroupBox;
    ListBox1: TListBox;
    GroupBox2: TGroupBox;
    ListBox2: TListBox;
    GroupBox3: TGroupBox;
    Edit1: TEdit;
    procedure Image1Click(Sender: TObject);
    procedure ListBox1Click(Sender: TObject);
    procedure ListBox2Click(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
  end;

implementation

uses
  ucomum, uextras;

{$R *.lfm}

constructor Ttm.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  if FileExists(UiDir + 'tm.jpg') then Image1.Picture.LoadFromFile(UiDir + 'tm.jpg');
  AjustarGroupBoxes(Self);
end;

procedure Ttm.Image1Click(Sender: TObject);   // 0x4b8f80
begin
  Close;
end;

procedure Ttm.ListBox1Click(Sender: TObject); // 0x4b846c
var
  I: Integer;
begin
  GroupBox3.Caption := 'Localização da TM:';
  I := ListBox1.ItemIndex;
  if (I >= Low(TM_LOCALIZACAO)) and (I <= High(TM_LOCALIZACAO)) then
    Edit1.Text := TM_LOCALIZACAO[I];
end;

procedure Ttm.ListBox2Click(Sender: TObject); // 0x4b8e4c
var
  I: Integer;
begin
  GroupBox3.Caption := 'Localização da HM:';
  I := ListBox2.ItemIndex;
  if (I >= Low(HM_LOCALIZACAO)) and (I <= High(HM_LOCALIZACAO)) then
    Edit1.Text := HM_LOCALIZACAO[I];
end;

end.
