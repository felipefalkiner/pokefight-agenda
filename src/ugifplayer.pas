{ ugifplayer.pas - substituto do TRxGIFAnimator (RX Library) para Lazarus.

  O original usava TRxGIFAnimator para o sprite do Pokémon, as cinco barras de
  status, o "Sair" e a moldura animada da janela. A LCL carrega GIF apenas como
  imagem estática, então esta unit traz um decodificador GIF87a/89a completo
  (LZW, entrelaçamento, transparência, métodos de disposal 0-3, atraso por quadro)
  e um player que desenha os quadros num TImage comum. Assim os forms (.lfm)
  continuam editáveis no Lazarus sem pacote extra.

  Comportamento espelhado do TRxGIFAnimator:
    Animate = False  -> mostra o quadro 0
    Animate = True   -> toca a animação; com Loop = False para no último quadro
    Clear            -> TRxGIFAnimator.Image.Clear (deixa a área vazia) }
unit ugifplayer;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Graphics, ExtCtrls, IntfGraphics, FPImage, GraphType;

type
  TGifFrames = class
  private
    FFrames: TFPList;   // TBitmap
    FDelays: array of Integer;
    FWidth, FHeight: Integer;
    function GetFrame(I: Integer): TBitmap;
    function GetDelay(I: Integer): Integer;
  public
    constructor Create;
    destructor Destroy; override;
    procedure Clear;
    procedure LoadFromStream(S: TStream);
    procedure LoadFromFile(const FileName: string);
    function Count: Integer;
    property Frames[I: Integer]: TBitmap read GetFrame;
    property Delays[I: Integer]: Integer read GetDelay; // milissegundos
    property Width: Integer read FWidth;
    property Height: Integer read FHeight;
  end;

  TGifPlayer = class(TComponent)
  private
    FTarget: TImage;
    FGif: TGifFrames;
    FTimer: TTimer;
    FIndex: Integer;
    FLoop: Boolean;
    FAnimate: Boolean;
    procedure SetAnimate(AValue: Boolean);
    procedure TimerTick(Sender: TObject);
    procedure ShowFrame(I: Integer);
  public
    constructor Create(AOwner: TComponent; ATarget: TImage; ALoop: Boolean = True); reintroduce;
    destructor Destroy; override;
    procedure LoadFromFile(const FileName: string);
    procedure Clear;
    property Animate: Boolean read FAnimate write SetAnimate;
    property Loop: Boolean read FLoop write FLoop;
    property Target: TImage read FTarget;
  end;

implementation

type
  TPalette = array[0..255] of TFPColor;

const
  COR_CHAVE = TColor($FE01FE); // quase-magenta: não aparece nos GIFs originais

{ ---------------------------------------------------------------- leitura }

function ReadByte(S: TStream): Byte;
begin
  S.ReadBuffer(Result, 1);
end;

function ReadWord(S: TStream): Word;
begin
  Result := ReadByte(S);
  Result := Result or (Word(ReadByte(S)) shl 8);
end;

procedure SkipSubBlocks(S: TStream);
var
  N: Byte;
begin
  repeat
    N := ReadByte(S);
    S.Seek(N, soCurrent);
  until N = 0;
end;

procedure ReadPalette(S: TStream; Count: Integer; var Pal: TPalette);
var
  I: Integer;
  RGB: array[0..2] of Byte;
begin
  for I := 0 to Count - 1 do
  begin
    S.ReadBuffer(RGB, 3);
    Pal[I].Red := RGB[0] * $101;
    Pal[I].Green := RGB[1] * $101;
    Pal[I].Blue := RGB[2] * $101;
    Pal[I].Alpha := alphaOpaque;
  end;
end;

{ Decodifica o fluxo LZW de um quadro em Count índices de cor. }
procedure LZWDecode(S: TStream; Pixels: PByte; Count: Integer);
const
  MaxCodes = 4096;
var
  MinCodeSize, CodeSize, CodeMask, ClearCode, EndCode, Available: Integer;
  OldCode, InCode, Code, First, Datum, Bits, Top, OutPos, I: Integer;
  Prefix: array[0..MaxCodes - 1] of SmallInt;
  Suffix: array[0..MaxCodes - 1] of Byte;
  Stack: array[0..MaxCodes] of Byte;
  BlockLen: Byte;
  Block: array[0..255] of Byte;
  Done: Boolean;
begin
  MinCodeSize := ReadByte(S);
  ClearCode := 1 shl MinCodeSize;
  EndCode := ClearCode + 1;
  Available := ClearCode + 2;
  CodeSize := MinCodeSize + 1;
  CodeMask := (1 shl CodeSize) - 1;
  OldCode := -1;
  First := 0;
  Datum := 0;
  Bits := 0;
  OutPos := 0;
  Done := False;
  for I := 0 to ClearCode - 1 do
  begin
    Prefix[I] := 0;
    Suffix[I] := I;
  end;
  FillChar(Pixels^, Count, 0);
  repeat
    BlockLen := ReadByte(S);
    if BlockLen = 0 then Break;
    S.ReadBuffer(Block, BlockLen);
    if Done then Continue; // consome o resto dos sub-blocos
    for I := 0 to BlockLen - 1 do
    begin
      Datum := Datum or (Integer(Block[I]) shl Bits);
      Inc(Bits, 8);
      while (Bits >= CodeSize) and not Done do
      begin
        Code := Datum and CodeMask;
        Datum := Datum shr CodeSize;
        Dec(Bits, CodeSize);
        if Code = ClearCode then
        begin
          CodeSize := MinCodeSize + 1;
          CodeMask := (1 shl CodeSize) - 1;
          Available := ClearCode + 2;
          OldCode := -1;
          Continue;
        end;
        if Code = EndCode then
        begin
          Done := True;
          Break;
        end;
        if OldCode = -1 then
        begin
          if OutPos < Count then begin Pixels[OutPos] := Suffix[Code]; Inc(OutPos); end;
          OldCode := Code;
          First := Code;
          Continue;
        end;
        InCode := Code;
        Top := 0;
        if Code >= Available then
        begin
          Stack[Top] := First; Inc(Top);
          Code := OldCode;
        end;
        while Code > ClearCode do
        begin
          Stack[Top] := Suffix[Code]; Inc(Top);
          Code := Prefix[Code];
        end;
        First := Suffix[Code];
        Stack[Top] := First; Inc(Top);
        if Available < MaxCodes then
        begin
          Prefix[Available] := OldCode;
          Suffix[Available] := First;
          Inc(Available);
          if ((Available and CodeMask) = 0) and (Available < MaxCodes) then
          begin
            Inc(CodeSize);
            CodeMask := CodeMask + Available;
          end;
        end;
        OldCode := InCode;
        while Top > 0 do
        begin
          Dec(Top);
          if OutPos < Count then begin Pixels[OutPos] := Stack[Top]; Inc(OutPos); end;
        end;
      end;
    end;
  until False;
end;

{ ---------------------------------------------------------------- TGifFrames }

constructor TGifFrames.Create;
begin
  FFrames := TFPList.Create;
end;

destructor TGifFrames.Destroy;
begin
  Clear;
  FFrames.Free;
  inherited Destroy;
end;

procedure TGifFrames.Clear;
var
  I: Integer;
begin
  for I := 0 to FFrames.Count - 1 do
    TBitmap(FFrames[I]).Free;
  FFrames.Clear;
  SetLength(FDelays, 0);
  FWidth := 0;
  FHeight := 0;
end;

function TGifFrames.Count: Integer;
begin
  Result := FFrames.Count;
end;

function TGifFrames.GetFrame(I: Integer): TBitmap;
begin
  Result := TBitmap(FFrames[I]);
end;

function TGifFrames.GetDelay(I: Integer): Integer;
begin
  Result := FDelays[I];
end;

procedure TGifFrames.LoadFromFile(const FileName: string);
var
  F: TFileStream;
begin
  F := TFileStream.Create(FileName, fmOpenRead or fmShareDenyWrite);
  try
    LoadFromStream(F);
  finally
    F.Free;
  end;
end;

procedure TGifFrames.LoadFromStream(S: TStream);
var
  Sig: array[0..5] of Char;
  Flags, Lbl, B: Byte;
  GlobalPal, LocalPal: TPalette;
  GlobalCount, BgIndex: Integer;
  Canvas, Saved: array of TFPColor;      // tela lógica composta (RGBA)
  Disposal, PrevDisposal, Delay, TransIndex: Integer;
  PrevL, PrevT, PrevW, PrevH: Integer;
  FL, FT, FW, FH, X, Y, Row, Pass, I: Integer;
  Interlaced, HasLocal: Boolean;
  Idx: array of Byte;
  Pal: ^TPalette;
  Img: TLazIntfImage;
  Bmp: TBitmap;
const
  PassStart: array[0..3] of Integer = (0, 4, 2, 1);
  PassStep: array[0..3] of Integer = (8, 8, 4, 2);
begin
  Clear;
  S.ReadBuffer(Sig, 6);
  if (Copy(Sig, 1, 3) <> 'GIF') then
    raise Exception.Create('Não é um arquivo GIF');
  FWidth := ReadWord(S);
  FHeight := ReadWord(S);
  Flags := ReadByte(S);
  BgIndex := ReadByte(S);
  ReadByte(S); // aspect ratio
  GlobalCount := 0;
  if Flags and $80 <> 0 then
  begin
    GlobalCount := 2 shl (Flags and 7);
    ReadPalette(S, GlobalCount, GlobalPal);
  end;
  if BgIndex = 0 then ; // fundo tratado como transparente (como os navegadores)
  SetLength(Canvas, FWidth * FHeight);
  for I := 0 to High(Canvas) do Canvas[I] := colTransparent;
  Saved := nil;
  Disposal := 0; PrevDisposal := 0; Delay := 0; TransIndex := -1;
  PrevL := 0; PrevT := 0; PrevW := 0; PrevH := 0;

  while S.Position < S.Size do
  begin
    B := ReadByte(S);
    case B of
      $21: // extensão
        begin
          Lbl := ReadByte(S);
          if Lbl = $F9 then // Graphic Control Extension
          begin
            ReadByte(S); // tamanho (4)
            Flags := ReadByte(S);
            Disposal := (Flags shr 2) and 7;
            Delay := ReadWord(S);
            TransIndex := ReadByte(S);
            if Flags and 1 = 0 then TransIndex := -1;
            SkipSubBlocks(S);
          end
          else
            SkipSubBlocks(S);
        end;
      $2C: // quadro
        begin
          FL := ReadWord(S); FT := ReadWord(S);
          FW := ReadWord(S); FH := ReadWord(S);
          Flags := ReadByte(S);
          HasLocal := Flags and $80 <> 0;
          Interlaced := Flags and $40 <> 0;
          if HasLocal then
          begin
            ReadPalette(S, 2 shl (Flags and 7), LocalPal);
            Pal := @LocalPal;
          end
          else
            Pal := @GlobalPal;

          // aplica o disposal do quadro anterior
          if PrevDisposal = 2 then
          begin
            for Y := PrevT to PrevT + PrevH - 1 do
              for X := PrevL to PrevL + PrevW - 1 do
                if (X < FWidth) and (Y < FHeight) then
                  Canvas[Y * FWidth + X] := colTransparent;
          end
          else if (PrevDisposal = 3) and (Length(Saved) = Length(Canvas)) then
            Canvas := Copy(Saved, 0, Length(Saved));
          if Disposal = 3 then
            Saved := Copy(Canvas, 0, Length(Canvas));

          SetLength(Idx, FW * FH);
          if FW * FH > 0 then
            LZWDecode(S, @Idx[0], FW * FH)
          else
            SkipSubBlocks(S);

          Row := 0; Pass := 0;
          for I := 0 to FH - 1 do
          begin
            if Interlaced then
            begin
              while (Pass < 4) and (Row >= FH) do
              begin
                Inc(Pass);
                if Pass < 4 then Row := PassStart[Pass];
              end;
              Y := Row;
              Inc(Row, PassStep[Pass]);
            end
            else
              Y := I;
            for X := 0 to FW - 1 do
            begin
              B := Idx[I * FW + X];
              // Semântica do TRxGIFAnimator: a COR do índice transparente vira
              // cor-chave, então qualquer índice com a mesma cor some também.
              // (o "Sair" original tem fundo preto opaco e índice transparente preto)
              if (TransIndex >= 0) and (Pal^[B].Red = Pal^[TransIndex].Red) and
                 (Pal^[B].Green = Pal^[TransIndex].Green) and (Pal^[B].Blue = Pal^[TransIndex].Blue) then
                Continue;
              if (FL + X < FWidth) and (FT + Y < FHeight) then
                Canvas[(FT + Y) * FWidth + FL + X] := Pal^[B];
            end;
          end;

          // fotografa a tela composta. O GIF só tem transparência de 1 bit, então
          // usamos cor-chave (o TImage da LCL desenha cor-chave de forma confiável)
          Img := TLazIntfImage.Create(0, 0, [riqfRGB]);
          try
            Img.DataDescription.Init_BPP24_B8G8R8_BIO_TTB(FWidth, FHeight);
            Img.SetSize(FWidth, FHeight);
            for Y := 0 to FHeight - 1 do
              for X := 0 to FWidth - 1 do
                if Canvas[Y * FWidth + X].Alpha = alphaTransparent then
                  Img.Colors[X, Y] := TColorToFPColor(COR_CHAVE)
                else
                  Img.Colors[X, Y] := Canvas[Y * FWidth + X];
            Bmp := TBitmap.Create;
            Bmp.LoadFromIntfImage(Img);
            Bmp.TransparentColor := COR_CHAVE;
            Bmp.TransparentMode := tmFixed;
            Bmp.Transparent := True;
            Bmp.Mask(COR_CHAVE);  // a LCL só respeita a transparência com máscara
          finally
            Img.Free;
          end;
          FFrames.Add(Bmp);
          SetLength(FDelays, FFrames.Count);
          if Delay < 2 then Delay := 10;  // mesma regra dos navegadores
          FDelays[High(FDelays)] := Delay * 10;

          PrevDisposal := Disposal;
          PrevL := FL; PrevT := FT; PrevW := FW; PrevH := FH;
          Disposal := 0; Delay := 0; TransIndex := -1;
        end;
      $3B: Break; // fim
    else
      Break; // byte inesperado: fica com os quadros lidos até aqui
    end;
  end;
end;

{ ---------------------------------------------------------------- TGifPlayer }

constructor TGifPlayer.Create(AOwner: TComponent; ATarget: TImage; ALoop: Boolean);
begin
  inherited Create(AOwner);
  FTarget := ATarget;
  FLoop := ALoop;
  FGif := TGifFrames.Create;
  FTimer := TTimer.Create(Self);
  FTimer.Enabled := False;
  FTimer.OnTimer := @TimerTick;
end;

destructor TGifPlayer.Destroy;
begin
  FTimer.Enabled := False;
  FGif.Free;
  inherited Destroy;
end;

procedure TGifPlayer.ShowFrame(I: Integer);
begin
  if (I < 0) or (I >= FGif.Count) then Exit;
  FIndex := I;
  FTarget.Picture.Assign(FGif.Frames[I]);
  // a cópia feita pelo Assign nem sempre leva a máscara junto
  FTarget.Picture.Bitmap.TransparentColor := COR_CHAVE;
  FTarget.Picture.Bitmap.TransparentMode := tmFixed;
  FTarget.Picture.Bitmap.Transparent := True;
  FTarget.Picture.Bitmap.Mask(COR_CHAVE);
  FTarget.Transparent := True;
end;

procedure TGifPlayer.LoadFromFile(const FileName: string);
begin
  FTimer.Enabled := False;
  FGif.Clear;
  if FileExists(FileName) then
    FGif.LoadFromFile(FileName);
  if FGif.Count = 0 then
  begin
    FTarget.Picture.Clear;
    Exit;
  end;
  ShowFrame(0);
  SetAnimate(FAnimate);
end;

procedure TGifPlayer.Clear;
begin
  FTimer.Enabled := False;
  FGif.Clear;
  FTarget.Picture.Clear;
end;

procedure TGifPlayer.SetAnimate(AValue: Boolean);
begin
  FAnimate := AValue;
  FTimer.Enabled := False;
  if FGif.Count = 0 then Exit;
  if FAnimate and (FGif.Count > 1) then
  begin
    ShowFrame(0);
    FTimer.Interval := FGif.Delays[0];
    FTimer.Enabled := True;
  end
  else if not FAnimate then
    ShowFrame(0);
end;

procedure TGifPlayer.TimerTick(Sender: TObject);
var
  Next: Integer;
begin
  Next := FIndex + 1;
  if Next >= FGif.Count then
  begin
    if not FLoop then
    begin
      FTimer.Enabled := False;
      Exit;
    end;
    Next := 0;
  end;
  ShowFrame(Next);
  FTimer.Interval := FGif.Delays[Next];
end;

end.
