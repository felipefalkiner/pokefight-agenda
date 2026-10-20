{ ucores.pas - "Personalizar cores..." (form TCores), aberto por Temas > Personalizar.

  Quatro cores: segundo plano da Agenda (Segundo), fundo e fonte dos quadros
  (fundo/fonte) e fonte dos rótulos (pok). Com "Previsão" marcado, os controles
  de exemplo mudam na hora. Aplicar marca o tema t5 na Agenda. }
unit ucores;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, StdCtrls, Buttons, ColorBox;

type

  { TCores }

  TCores = class(TForm)
    GroupBox4: TGroupBox;
    GroupBox3: TGroupBox;
    Label1: TLabel;
    Label2: TLabel;
    seg: TGroupBox;
    fundo: TColorBox;
    fonte: TColorBox;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    GroupBox1: TGroupBox;
    Label3: TLabel;
    Edit1: TEdit;
    prever: TCheckBox;
    ListBox1: TListBox;
    Segundo: TColorBox;
    GroupBox2: TGroupBox;
    pokemon: TLabel;
    pok: TColorBox;
    procedure BitBtn1Click(Sender: TObject);
    procedure BitBtn2Click(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure SegundoClick(Sender: TObject);
    procedure fonteClick(Sender: TObject);
    procedure fundoClick(Sender: TObject);
    procedure pokClick(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
  end;

implementation

uses
  ucomum, uapkg;

{$R *.lfm}

procedure Configurar(C: TColorBox);
begin
  C.Style := [cbStandardColors, cbExtendedColors, cbSystemColors, cbCustomColor, cbPrettyNames];
end;

procedure Selecionar(C: TColorBox; Cor: TColor; Padrao: TColor = clWindow);
begin
  // a LCL usa clDefault onde o Delphi 3 gravava clWindow / clWindowText
  if Cor = clDefault then Cor := Padrao;
  C.Selected := Cor;
end;

constructor TCores.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  Configurar(fundo); Configurar(fonte); Configurar(Segundo); Configurar(pok);
  // TColorComboBox usava OnClick; TColorBox avisa por OnChange
  fundo.OnChange := @fundoClick;
  fonte.OnChange := @fonteClick;
  Segundo.OnChange := @SegundoClick;
  pok.OnChange := @pokClick;
  AjustarGroupBoxes(Self);
end;

// 0x4a35b4 - carrega as cores atuais da Agenda
procedure TCores.FormActivate(Sender: TObject);
begin
  Selecionar(pok, APKG.Label1.Font.Color);
  pokemon.Font.Color := APKG.Label1.Font.Color;
  Selecionar(Segundo, APKG.Color);
  seg.Color := APKG.Color;
  Color := APKG.Color;
  Edit1.Color := APKG.Edit1.Color;
  Edit1.Font.Color := APKG.Edit1.Font.Color;
  Selecionar(fundo, APKG.ListBox1.Color);
  Selecionar(fonte, APKG.ListBox1.Font.Color, clWindowText);
  fundoClick(nil);
end;

// 0x4a344c / 0x4a3500
procedure TCores.fundoClick(Sender: TObject);
begin
  if not prever.Checked then Exit;
  Edit1.Color := fundo.Selected;
  Edit1.Font.Color := fonte.Selected;
  ListBox1.Color := fundo.Selected;
  ListBox1.Font.Color := fonte.Selected;
end;

procedure TCores.fonteClick(Sender: TObject);
begin
  fundoClick(Sender);
end;

// 0x4a37f4
procedure TCores.SegundoClick(Sender: TObject);
begin
  if prever.Checked then seg.Color := Segundo.Selected;
end;

// 0x4a3824
procedure TCores.pokClick(Sender: TObject);
begin
  if prever.Checked then pokemon.Font.Color := pok.Selected;
end;

// 0x4a3014 - Aplicar
procedure TCores.BitBtn1Click(Sender: TObject);
begin
  APKG.AplicarCoresPersonalizadas(Segundo.Selected, fundo.Selected, fonte.Selected, pok.Selected);
  Close;
end;

// 0x4a343c - Cancelar
procedure TCores.BitBtn2Click(Sender: TObject);
begin
  Close;
end;

end.
