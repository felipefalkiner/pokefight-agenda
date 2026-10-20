{ uyellow.pas - "Code Pokémon Yellow Version - Game Boy" (form Tyellow). }
unit uyellow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, StdCtrls, ExtCtrls;

type

  { Tyellow }

  Tyellow = class(TForm)
    Image1: TImage;
    RxRichEdit1: TMemo;
    procedure Image1Click(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
  end;

implementation

uses
  ucomum;

{$R *.lfm}

constructor Tyellow.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  if FileExists(UiDir + 'yellow.jpg') then Image1.Picture.LoadFromFile(UiDir + 'yellow.jpg');
  if FileExists(UiDir + 'yellow.ico') then Icon.LoadFromFile(UiDir + 'yellow.ico');
end;

procedure Tyellow.Image1Click(Sender: TObject);  // 0x4a3d20 (botão "Sair" desenhado)
begin
  Close;
end;

end.
