object Marts: TMarts
  Left = 254
  Top = 123
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Lista de itens dos Pok'#233'-Marts'
  ClientHeight = 254
  ClientWidth = 333
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
  object GroupBox1: TGroupBox
    Left = 8
    Top = 16
    Width = 193
    Height = 49
    Caption = 'Cidades:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    object ComboBox1: TComboBox
      Left = 8
      Top = 16
      Width = 177
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      Items.Strings = (
        'Cidade de Viridian'
        'Cidade de Pewter'
        'Cidade de Cerulean'
        'Cidade de Vermilion'
        'Cidade de Lavender'
        'Cidade de Saffron'
        'Cidade de Celadon (2'#186' Andar)'
        'Cidade de Celadon (4'#186' Andar)'
        'Cidade de Celadon (5'#186' Andar)'
        'Cidade de Celadon (6'#186' Andar)'
        'Cidade de Fucshia'
        'Ilha de Cinnabar'
        'Indigo Plateau')
      ParentFont = False
      TabOrder = 0
      Text = 'Clique e selecione uma cidade'
      OnClick = ComboBox1Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 72
    Width = 193
    Height = 169
    Caption = 'Itens'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object Memo1: TMemo
      Left = 8
      Top = 16
      Width = 177
      Height = 145
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object BitBtn1: TBitBtn
    Left = 232
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Fechar'
    TabOrder = 2
    OnClick = BitBtn1Click
    Kind = bkCancel
  end
end
