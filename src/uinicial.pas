{ uinicial.pas - tela de abertura (form Tinicial). }
unit uinicial;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, StdCtrls, ExtCtrls, Buttons;

type

  { Tinicial }

  Tinicial = class(TForm)
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    enter: TBitBtn;
    procedure FormActivate(Sender: TObject);
    procedure enterClick(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
  end;

var
  inicial: Tinicial;

implementation

uses
  ucomum;

{$R *.lfm}

constructor Tinicial.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  if FileExists(UiDir + 'splash.jpg') then
    Image1.Picture.LoadFromFile(UiDir + 'splash.jpg');
  enter.ModalResult := mrOK;
end;

// 0x4b94b8 - original: se c:\windows\data\1.gif não existisse, WinExec('press.com')
procedure Tinicial.FormActivate(Sender: TObject);
begin
  enter.SetFocus;
end;

// 0x4b94a8 - original: APKG.ShowModal. Aqui a abertura é modal antes do form
// principal (ver pokefight.lpr), então basta fechá-la.
procedure Tinicial.enterClick(Sender: TObject);
begin
  ModalResult := mrOK;
end;

end.
