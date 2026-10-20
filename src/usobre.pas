{ usobre.pas - "Sobre..." (form Tabout), com os créditos rolando.

  O TSecretPanel da RX Library virou um TPanel com um TPaintBox desenhado
  em código: o texto sobe continuamente (Interval = 35 ms, Cycled = True) e
  um clique pausa ou retoma, como no original. }
unit usobre;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, StdCtrls, ExtCtrls, Buttons, LCLType;

type

  { Tabout }

  Tabout = class(TForm)
    Image1: TImage;
    code1: TImage;
    Image2: TImage;
    SecretPanel1: TPanel;
    BitBtn1: TBitBtn;
    Timer1: TTimer;
    procedure BitBtn1Click(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure FormClose(Sender: TObject; var CloseAction: TCloseAction);
    procedure SecretPanel1Click(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
  private
    FCanvas: TPaintBox;
    FScroll: TTimer;
    FOffset: Integer;
    procedure PintarCreditos(Sender: TObject);
    procedure Rolar(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
  end;

var
  about: Tabout;

implementation

uses
  LCLIntf, ucomum, uextras;

{$R *.lfm}

constructor Tabout.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  if FileExists(UiDir + 'sobre_faixa.jpg') then
  begin
    Image1.Picture.LoadFromFile(UiDir + 'sobre_faixa.jpg');
    Image2.Picture.LoadFromFile(UiDir + 'sobre_faixa.jpg');
  end;
  if FileExists(UiDir + 'sobre.ico') then Icon.LoadFromFile(UiDir + 'sobre.ico');
  FCanvas := TPaintBox.Create(Self);
  FCanvas.Parent := SecretPanel1;
  FCanvas.Align := alClient;
  FCanvas.OnPaint := @PintarCreditos;
  FCanvas.OnClick := @SecretPanel1Click;
  FCanvas.Hint := SecretPanel1.Hint;
  FCanvas.ShowHint := True;
  FScroll := TTimer.Create(Self);
  FScroll.Interval := 35;
  FScroll.Enabled := False;
  FScroll.OnTimer := @Rolar;
end;

procedure Tabout.PintarCreditos(Sender: TObject);
var
  I, Y, H: Integer;
  C: TCanvas;
begin
  C := FCanvas.Canvas;
  C.Brush.Color := SecretPanel1.Color;
  C.FillRect(0, 0, FCanvas.Width, FCanvas.Height);
  C.Font.Assign(SecretPanel1.Font);
  H := C.TextHeight('Áy');
  Y := FCanvas.Height - FOffset;
  for I := Low(CREDITOS) to High(CREDITOS) do
  begin
    if (Y > -H) and (Y < FCanvas.Height) then
      C.TextOut((FCanvas.Width - C.TextWidth(CREDITOS[I])) div 2, Y, CREDITOS[I]);
    Inc(Y, H);
  end;
end;

procedure Tabout.Rolar(Sender: TObject);
begin
  Inc(FOffset);
  // Cycled = True: recomeça depois que a última linha sai por cima
  if FOffset > FCanvas.Height + Length(CREDITOS) * FCanvas.Canvas.TextHeight('Áy') then
    FOffset := 0;
  FCanvas.Invalidate;
end;

procedure Tabout.BitBtn1Click(Sender: TObject);   // 0x4a3ac4
begin
  Close;
end;

procedure Tabout.FormActivate(Sender: TObject);  // 0x4a3acc: SecretPanel1.Active := True
begin
  FScroll.Enabled := True;
end;

procedure Tabout.FormClose(Sender: TObject; var CloseAction: TCloseAction);  // 0x4a3adc
begin
  FScroll.Enabled := False;
end;

// 0x4a3b1c - alterna a rolagem (pausa/continua)
procedure Tabout.SecretPanel1Click(Sender: TObject);
begin
  FScroll.Enabled := not FScroll.Enabled;
end;

// 0x4a3aec - easter egg inacabado: com Scroll Lock ligado, a imagem code1
// fica habilitada, mas nunca teve OnClick. Mantido como era.
procedure Tabout.Timer1Timer(Sender: TObject);
begin
  code1.Enabled := (GetKeyState(VK_SCROLL) and 1) <> 0;
end;

end.
