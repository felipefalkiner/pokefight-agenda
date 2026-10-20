object Cores: TCores
  Left = 148
  Top = 100
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Personalizar cores...'
  ClientHeight = 336
  ClientWidth = 371
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox4: TGroupBox
    Left = 184
    Top = 24
    Width = 177
    Height = 225
    Caption = 'Cores da Agenda KillerGym:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
  end
  object GroupBox3: TGroupBox
    Left = 8
    Top = 16
    Width = 161
    Height = 305
    Caption = 'Quadro e fonte do quadro:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    object Label1: TLabel
      Left = 8
      Top = 24
      Width = 118
      Height = 13
      Caption = 'Segundo Plano da fonte:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 8
      Top = 64
      Width = 89
      Height = 13
      Caption = 'Fonte: (Do quadro)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
  end
  object seg: TGroupBox
    Left = 192
    Top = 56
    Width = 161
    Height = 81
    Caption = 'Segundo Plano:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object fundo: TColorComboBox
    Left = 16
    Top = 56
    Width = 145
    Height = 22
    ColorNames.Strings = (
      'Preto'
      'Castanho'
      'Verde'
      'Verde-Oliva'
      'Azul Marinho'
      'Roxo'
      'Azul Petr'#243'leo'
      'Cinza'
      'Prateado'
      'Vermelho'
      'Verde Lim'#227'o'
      'Amarelo'
      'Azul'
      'F'#250'csia'
      'Azul-Piscina'
      'Branco')
    TabOrder = 0
    OnClick = fundoClick
  end
  object fonte: TColorComboBox
    Left = 16
    Top = 96
    Width = 145
    Height = 22
    ColorNames.Strings = (
      'Preto'
      'Castanho'
      'Verde'
      'Verde-Oliva'
      'Azul Marinho'
      'Roxo'
      'Azul Petr'#243'leo'
      'Cinza'
      'Prateado'
      'Vermelho'
      'Verde Lim'#227'o'
      'Amarelo'
      'Azul'
      'F'#250'csia'
      'Azul-Piscina'
      'Branco')
    TabOrder = 1
    OnClick = fonteClick
  end
  object BitBtn1: TBitBtn
    Left = 184
    Top = 264
    Width = 75
    Height = 25
    Caption = '&Aplicar'
    TabOrder = 2
    OnClick = BitBtn1Click
    Kind = bkYes
  end
  object BitBtn2: TBitBtn
    Left = 288
    Top = 304
    Width = 75
    Height = 25
    Caption = '&Cancelar'
    TabOrder = 3
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 128
    Width = 145
    Height = 177
    Caption = 'Previs'#227'o:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    object Label3: TLabel
      Left = 8
      Top = 48
      Width = 38
      Height = 13
      Caption = 'Quadro:'
    end
    object Edit1: TEdit
      Left = 8
      Top = 24
      Width = 129
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
      Text = 'Pok'#233'mon'
    end
    object prever: TCheckBox
      Left = 16
      Top = 152
      Width = 49
      Height = 17
      Caption = 'Prev'#234
      Checked = True
      State = cbChecked
      TabOrder = 1
    end
    object ListBox1: TListBox
      Left = 8
      Top = 64
      Width = 129
      Height = 81
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      Items.Strings = (
        'Pok'#233'mon')
      ParentFont = False
      TabOrder = 2
    end
  end
  object Segundo: TColorComboBox
    Left = 200
    Top = 88
    Width = 129
    Height = 22
    ColorNames.Strings = (
      'Preto'
      'Castanho'
      'Verde'
      'Verde-Oliva'
      'Azul Marinho'
      'Roxo'
      'Azul Petr'#243'leo'
      'Cinza'
      'Prateado'
      'Vermelho'
      'Verde Lim'#227'o'
      'Amarelo'
      'Azul'
      'F'#250'csia'
      'Azul-Piscina'
      'Branco')
    TabOrder = 5
    OnClick = SegundoClick
  end
  object GroupBox2: TGroupBox
    Left = 192
    Top = 144
    Width = 161
    Height = 89
    Caption = 'Fonte:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    object pokemon: TLabel
      Left = 40
      Top = 56
      Width = 81
      Height = 24
      Caption = 'Pok'#233'mon'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
  end
  object pok: TColorComboBox
    Left = 208
    Top = 168
    Width = 129
    Height = 22
    ColorNames.Strings = (
      'Preto'
      'Castanho'
      'Verde'
      'Verde-Oliva'
      'Azul Marinho'
      'Roxo'
      'Azul Petr'#243'leo'
      'Cinza'
      'Prateado'
      'Vermelho'
      'Verde Lim'#227'o'
      'Amarelo'
      'Azul'
      'F'#250'csia'
      'Azul-Piscina'
      'Branco')
    TabOrder = 8
    OnClick = pokClick
  end
  object FormStorage1: TFormStorage
    IniFileName = 'gym.ini'
    IniSection = 'gym.ini'
    StoredProps.Strings = (
      'fundo.ColorValue'
      'fonte.ColorValue'
      'Segundo.ColorValue'
      'seg.Color'
      'pok.ColorValue'
      'pokemon.Font')
    StoredValues = <
>
    Left = 112
    Top = 240
  end
end
