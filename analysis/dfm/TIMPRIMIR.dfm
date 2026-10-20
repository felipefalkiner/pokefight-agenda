object imprimir: Timprimir
  Left = 177
  Top = 188
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Imprimir'
  ClientHeight = 265
  ClientWidth = 453
  Color = 4194368
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object num: TLabel
    Left = 8
    Top = 237
    Width = 31
    Height = 16
    Caption = 'NUM'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object caps: TLabel
    Left = 72
    Top = 237
    Width = 36
    Height = 16
    Caption = 'CAPS'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object BitBtn1: TBitBtn
    Left = 280
    Top = 232
    Width = 75
    Height = 25
    Caption = '&Imprimir'
    TabOrder = 0
    OnClick = BitBtn1Click
    Kind = bkYes
  end
  object BitBtn2: TBitBtn
    Left = 368
    Top = 232
    Width = 75
    Height = 25
    Caption = '&Fechar'
    TabOrder = 1
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object print: TRichEdit
    Left = 8
    Top = 8
    Width = 433
    Height = 217
    PopupMenu = APKG.SairPop
    ScrollBars = ssBoth
    TabOrder = 2
  end
  object PrintDialog1: TPrintDialog
    Left = 160
    Top = 184
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 32
    Top = 184
  end
  object MainMenu1: TMainMenu
    Left = 64
    Top = 184
    object Arquivo1: TMenuItem
      Caption = '&Arquivo'
      object Novo1: TMenuItem
        Caption = '&Novo'
        OnClick = Novo1Click
      end
      object Abrir1: TMenuItem
        Caption = 'A&brir'
        OnClick = Abrir1Click
      end
      object Salvar1: TMenuItem
        Caption = '&Salvar'
        OnClick = Salvar1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Sair1: TMenuItem
        Caption = '&Fechar'
        OnClick = Sair1Click
      end
    end
    object Formatar1: TMenuItem
      Caption = '&Formatar'
      ShortCut = 16451
      object Fonte1: TMenuItem
        Caption = 'F&onte'
        OnClick = Fonte1Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = '.kil'
    Filter = 'KillerGym (*.kil*)|*.kil*'
    Left = 96
    Top = 184
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'kil'
    Filter = 'KillerGym (*.kil*)|*.kil*'
    Left = 128
    Top = 184
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 192
    Top = 184
  end
end
