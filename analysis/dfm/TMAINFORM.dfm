object MainForm: TMainForm
  Left = 188
  Top = 58
  Width = 549
  Height = 458
  ActiveControl = Editor
  Caption = 'Agenda Pok'#233'mon - Pok'#233' Fight v1.2'
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = MainMenu
  OldCreateOrder = True
  Position = poDesktopCenter
  OnActivate = FormActivate
  OnClose = FormClose
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnPaint = FormPaint
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Ruler: TPanel
    Left = 0
    Top = 70
    Width = 541
    Height = 26
    Align = alTop
    Alignment = taLeftJustify
    BevelInner = bvLowered
    BevelOuter = bvNone
    BorderWidth = 1
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnResize = RulerResize
    object FirstInd: TLabel
      Left = 3
      Top = 2
      Width = 10
      Height = 12
      Caption = #234
      DragCursor = crArrow
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Wingdings'
      Font.Style = []
      ParentFont = False
      Transparent = True
      OnMouseDown = RulerItemMouseDown
      OnMouseMove = RulerItemMouseMove
      OnMouseUp = FirstIndMouseUp
    end
    object LeftInd: TLabel
      Left = 3
      Top = 12
      Width = 10
      Height = 12
      Caption = #233
      DragCursor = crArrow
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Wingdings'
      Font.Style = []
      ParentFont = False
      Transparent = True
      OnMouseDown = RulerItemMouseDown
      OnMouseMove = RulerItemMouseMove
      OnMouseUp = LeftIndMouseUp
    end
    object RulerLine: TBevel
      Left = 4
      Top = 12
      Width = 482
      Height = 2
      Shape = bsTopLine
    end
    object RightInd: TLabel
      Left = 475
      Top = 13
      Width = 9
      Height = 12
      Caption = #241
      DragCursor = crArrow
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Wingdings'
      Font.Style = []
      ParentFont = False
      Transparent = True
      OnMouseDown = RulerItemMouseDown
      OnMouseMove = RulerItemMouseMove
      OnMouseUp = RightIndMouseUp
    end
  end
  object Editor: TRxRichEdit
    Left = 0
    Top = 96
    Width = 541
    Height = 264
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    HideSelection = False
    ParentFont = False
    PopupMenu = EditPopupMenu
    TabOrder = 1
    WantTabs = True
    OnChange = RichEditChange
    OnProtectChange = EditorProtectChange
    OnSelectionChange = SelectionChange
    OnTextNotFound = EditorTextNotFound
    OnURLClick = EditorURLClick
  end
  object StatusBar: TStatusBar
    Left = 0
    Top = 393
    Width = 541
    Height = 19
    Panels = <
      item
        Width = 120
      end
      item
        Alignment = taCenter
        Width = 90
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object CoolBar1: TCoolBar
    Left = 0
    Top = 0
    Width = 541
    Height = 70
    Bands = <
      item
        Control = SpeedBar
        ImageIndex = -1
        MinHeight = 31
        Width = 537
      end
      item
        Control = FormatBar
        ImageIndex = -1
        MinHeight = 31
        Width = 537
      end>
    object SpeedBar: TSpeedBar
      Left = 9
      Top = 0
      Width = 524
      Height = 31
      ParentFont = True
      BoundLines = [blTop]
      Options = [sbFlatBtns]
      BtnOffsetHorz = 4
      BtnOffsetVert = 5
      BtnWidth = 24
      BtnHeight = 23
      Images = ToolbarImages
      BevelOuter = bvNone
      Color = clBlack
      Locked = True
      TabOrder = 0
      InternalVer = 1
      object num: TLabel
        Left = 280
        Top = 9
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
        Left = 360
        Top = 9
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
      object Label1: TLabel
        Left = 336
        Top = 9
        Width = 4
        Height = 16
        Caption = '/'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clLime
        Font.Height = -13
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object SpeedbarSection1: TSpeedbarSection
        Caption = 'File'
      end
      object SpeedbarSection2: TSpeedbarSection
        Caption = 'Edit'
      end
      object NewBtn: TSpeedItem
        Caption = 'Novo'
        Hint = 'Novo|Cria um novo arquivo'
        ImageIndex = 0
        Spacing = 1
        Left = 4
        Top = 5
        Visible = True
        OnClick = FileNew
        SectionName = 'File'
      end
      object OpenBtn: TSpeedItem
        Caption = 'Abrir'
        Hint = 'Abrir|Abre um arquivo existente'
        ImageIndex = 1
        Spacing = 1
        Left = 28
        Top = 5
        Visible = True
        OnClick = FileOpen
        SectionName = 'File'
      end
      object SaveBtn: TSpeedItem
        Caption = 'Salvar'
        Hint = 'Salvar|Salva o arquivo'
        ImageIndex = 2
        Spacing = 1
        Left = 52
        Top = 5
        Visible = True
        OnClick = FileSave
        SectionName = 'File'
      end
      object PrintBtn: TSpeedItem
        Caption = 'Imprimir'
        Hint = 'Imprimir|Imprime o arquivo'
        ImageIndex = 3
        Spacing = 1
        Left = 76
        Top = 5
        Visible = True
        OnClick = FilePrint
        SectionName = 'File'
      end
      object CutBtn: TSpeedItem
        Caption = 'Recortar'
        Hint = 'Recortar|Recorta texto selecionado e envia para o clipboard'
        ImageIndex = 6
        Spacing = 1
        Left = 140
        Top = 5
        Visible = True
        OnClick = EditCut
        SectionName = 'Edit'
      end
      object CopyBtn: TSpeedItem
        Caption = 'Copiar'
        Hint = 'Copiar|Copia o texto do clipboard para o editor'
        ImageIndex = 7
        Spacing = 1
        Left = 164
        Top = 5
        Visible = True
        OnClick = EditCopy
        SectionName = 'Edit'
      end
      object PasteBtn: TSpeedItem
        Caption = 'Colar'
        Hint = 'Colar|Cola texto do clipboard para o editor'
        ImageIndex = 8
        Spacing = 1
        Left = 188
        Top = 5
        Visible = True
        OnClick = EditPaste
        SectionName = 'Edit'
      end
      object UndoBtn: TSpeedItem
        Caption = 'Desfazer'
        Hint = 'Desfazer|Desfaz uma a'#231#227'o'
        ImageIndex = 9
        Spacing = 1
        Left = 220
        Top = 5
        Visible = True
        OnClick = EditUndo
        SectionName = 'Edit'
      end
      object RedoBtn: TSpeedItem
        Caption = 'Refazer'
        Hint = 'Refazer|Refaz uma a'#231#227'o desfeita'
        ImageIndex = 10
        Spacing = 1
        Left = 244
        Top = 5
        Visible = True
        OnClick = EditRedo
        SectionName = 'Edit'
      end
      object FindBtn: TSpeedItem
        Caption = 'Localizar'
        Hint = 'Localizar|Localiza texto especificado'
        ImageIndex = 5
        Spacing = 1
        Left = 108
        Top = 5
        Visible = True
        OnClick = EditFindClick
        SectionName = 'Edit'
      end
    end
    object FormatBar: TSpeedBar
      Left = 9
      Top = 33
      Width = 524
      Height = 31
      ParentFont = True
      BoundLines = [blTop]
      Options = [sbFlatBtns]
      BtnOffsetHorz = 4
      BtnOffsetVert = 5
      BtnWidth = 24
      BtnHeight = 23
      Images = ToolbarImages
      BevelOuter = bvNone
      Color = clBlack
      TabOrder = 1
      InternalVer = 1
      object FontName: TFontComboBox
        Left = 3
        Top = 7
        Width = 175
        Height = 20
        Device = fdBoth
        FontName = 'FontName'
        Style = csDropDown
        TabOrder = 0
        OnChange = FontNameChange
      end
      object FontSize: TRxSpinEdit
        Left = 182
        Top = 6
        Width = 42
        Height = 21
        Alignment = taRightJustify
        ButtonKind = bkStandard
        Decimal = 0
        MaxValue = 2147483647.0
        MinValue = 1.0
        Value = 10.0
        TabOrder = 1
        OnChange = FontSizeChange
      end
      object SpeedbarSection3: TSpeedbarSection
        Caption = 'Format'
      end
      object BoldBtn: TSpeedItem
        AllowAllUp = True
        Caption = 'Negrito'
        GroupIndex = 5
        Hint = 'Negrito|Deixa o texto selecionado em negrito'
        ImageIndex = 13
        Spacing = 1
        Left = 228
        Top = 5
        Visible = True
        OnClick = BoldButtonClick
        SectionName = 'Format'
      end
      object ItalicBtn: TSpeedItem
        AllowAllUp = True
        Caption = 'Italico'
        GroupIndex = 6
        Hint = 'Italico|Deixa o texto selecionado em italico'
        ImageIndex = 14
        Spacing = 1
        Left = 252
        Top = 5
        Visible = True
        OnClick = ItalicButtonClick
        SectionName = 'Format'
      end
      object UnderlineBtn: TSpeedItem
        AllowAllUp = True
        Caption = 'Sublinhado'
        GroupIndex = 7
        Hint = 'Sublinhado|Deixa o texto selecionado sublinhado'
        ImageIndex = 15
        Spacing = 1
        Left = 276
        Top = 5
        Visible = True
        OnClick = UnderlineButtonClick
        SectionName = 'Format'
      end
      object ColorBtn: TSpeedItem
        Caption = 'Cor'
        DropDownMenu = ColorMenu
        Hint = 'Cor|Formata a cor do texto selecionado'
        ImageIndex = 16
        MarkDropDown = False
        Spacing = 1
        Left = 300
        Top = 5
        Visible = True
        SectionName = 'Format'
      end
      object BackgroundBtn: TSpeedItem
        Caption = 'Segundo Plano'
        DropDownMenu = BackgroundMenu
        Hint = 'Segundo Plano do Texto|Formata o segundo plano do texto'
        ImageIndex = 24
        MarkDropDown = False
        Spacing = 1
        Left = 324
        Top = 5
        Visible = True
        SectionName = 'Format'
      end
      object LeftBtn: TSpeedItem
        Caption = 'Alinhar a Esquerda'
        GroupIndex = 2
        Hint = 'Alinhar a Esquerda'
        ImageIndex = 17
        Spacing = 1
        Left = 356
        Top = 5
        Visible = True
        OnClick = AlignButtonClick
        SectionName = 'Format'
      end
      object CenterBtn: TSpeedItem
        Tag = 2
        Caption = 'Centro'
        GroupIndex = 2
        Hint = 'Centro'
        ImageIndex = 18
        Spacing = 1
        Left = 380
        Top = 5
        Visible = True
        OnClick = AlignButtonClick
        SectionName = 'Format'
      end
      object RightBtn: TSpeedItem
        Tag = 1
        Caption = 'Alinhar a Direita'
        GroupIndex = 2
        Hint = 'Alinhar a Direita'
        ImageIndex = 19
        Spacing = 1
        Left = 404
        Top = 5
        Visible = True
        OnClick = AlignButtonClick
        SectionName = 'Format'
      end
      object SuperscriptBtn: TSpeedItem
        AllowAllUp = True
        Caption = 'Sobrescrito'
        GroupIndex = 3
        Hint = 'Sobrescrito'
        ImageIndex = 21
        Spacing = 1
        Left = 468
        Top = 5
        Visible = True
        OnClick = SubscriptClick
        SectionName = 'Format'
      end
      object SubscriptBtn: TSpeedItem
        AllowAllUp = True
        Caption = 'Subscrito'
        GroupIndex = 3
        Hint = 'Subscrito'
        ImageIndex = 22
        Spacing = 1
        Left = 492
        Top = 5
        Visible = True
        OnClick = SubscriptClick
        SectionName = 'Format'
      end
      object BulletsBtn: TSpeedItem
        AllowAllUp = True
        Caption = 'Marcar'
        GroupIndex = 4
        Hint = 'Marcar|Marca texto com pontos onde ouver tido pressionada a tecla "ENTER"'
        ImageIndex = 20
        Spacing = 1
        Left = 436
        Top = 5
        Visible = True
        OnClick = BulletsButtonClick
        SectionName = 'Format'
      end
    end
  end
  object site: TSecretPanel
    Left = 0
    Top = 360
    Width = 541
    Height = 33
    Lines.Strings = (
      'http://www.pokefight.cjb.net')
    ScrollDirection = sdHorizontal
    Align = alBottom
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object MainMenu: TRxMainMenu
    Images = ToolbarImages
    ShowCheckMarks = False
    OnGetImageIndex = MainMenuGetImageIndex
    OnMeasureItem = MainMenuMeasureItem
    Left = 8
    Top = 128
    object FileMenu: TMenuItem
      Tag = -1
      Caption = '&Arquivo'
      object FileNewItem: TMenuItem
        Caption = '&Novo'
        Hint = 'Cria um novo arquivo'
        ShortCut = 16462
        OnClick = FileNew
      end
      object FileOpenItem: TMenuItem
        Tag = 1
        Caption = 'A&brir'
        Hint = 'Abre um arquivo existente'
        ShortCut = 16463
        OnClick = FileOpen
      end
      object FileSaveItem: TMenuItem
        Tag = 2
        Caption = '&Salvar'
        Hint = 'Salvar arquivo'
        ShortCut = 16467
        OnClick = FileSave
      end
      object FileSaveAsItem: TMenuItem
        Tag = -1
        Caption = 'Salvar &Como...'
        Hint = 'Salvar arquivo com um nome especificado'
        OnClick = FileSaveAs
      end
      object FileSaveSelItem: TMenuItem
        Tag = -1
        Caption = 'Salvar S&elecionado...'
        Hint = 'Salvar somente o texto selecionado'
        OnClick = FileSaveSelected
      end
      object N1: TMenuItem
        Tag = -1
        Caption = '-'
      end
      object FilePrintItem: TMenuItem
        Tag = 3
        Caption = '&Imprimir'
        Hint = 'Imprimir arquivo'
        ShortCut = 16464
        OnClick = FilePrint
      end
      object N4: TMenuItem
        Tag = -1
        Caption = '-'
      end
      object FileExitItem: TMenuItem
        Tag = -1
        Caption = '&Fechar'
        Hint = 'Fecha o Editor - KillerGym v1.2'
        ShortCut = 32856
        OnClick = FileExit
      end
      object Sair1: TMenuItem
        Tag = -1
        Caption = 'Sai&r'
        Hint = 'Fecha a agenda e todos os perifericos'
        OnClick = Sair1Click
      end
    end
    object EditMenu: TMenuItem
      Tag = -1
      Caption = '&Editar'
      GroupIndex = 1
      object EditUndoItem: TMenuItem
        Tag = 9
        Caption = '&Desfazer'
        Hint = 'Desfaz uma a'#231#227'o feita no arquivo'
        ShortCut = 16474
        OnClick = EditUndo
      end
      object EditRedoItem: TMenuItem
        Tag = 10
        Caption = 'Re&fazer'
        Hint = 'Refaz uma a'#231#227'o desfeita'
        ShortCut = 16473
        OnClick = EditRedo
      end
      object N2: TMenuItem
        Tag = -1
        Caption = '-'
      end
      object EditCutItem: TMenuItem
        Tag = 6
        Caption = 'Rec&ortar'
        Hint = 'Deleta o item selecionado e envia para o clipboard'
        ShortCut = 16472
        OnClick = EditCut
      end
      object EditCopyItem: TMenuItem
        Tag = 7
        Caption = 'Co&piar'
        Hint = 'Copia o item selecionado e envia para o clipboard'
        ShortCut = 16451
        OnClick = EditCopy
      end
      object EditPasteItem: TMenuItem
        Tag = 8
        Caption = 'Co&lar'
        Hint = 'Cola o item contido no clipboard para o arquivo'
        ShortCut = 16470
        OnClick = EditPaste
      end
      object EditPasteSpecial: TMenuItem
        Tag = -1
        Caption = 'Cola Espec&ial'
        Hint = 'Insere item contido no clipboard com op'#231#245'es'
        OnClick = EditPasteSpecialClick
      end
      object EditSelectAllItem: TMenuItem
        Tag = -1
        Caption = 'Selecionar &Tudo'
        Hint = 'Seleciona todo o texto'
        ShortCut = 16449
        OnClick = EditSelectAll
      end
      object N3: TMenuItem
        Tag = -1
        Caption = '-'
      end
      object EditFindItem: TMenuItem
        Tag = 5
        Caption = 'Locali&zar...'
        Hint = 'Localiza o texto especificado'
        ShortCut = 16454
        OnClick = EditFindClick
      end
      object EditFindNextItem: TMenuItem
        Tag = -1
        Caption = 'Localizar Pr'#243'&ximo'
        Hint = 'Continua a localizar o texto especificado'
        ShortCut = 114
        OnClick = EditFindNextItemClick
      end
      object EditReplaceItem: TMenuItem
        Tag = -1
        Caption = '&Substituir'
        Hint = 'Substitui letras, palavras e etc. por outras...'
        ShortCut = 16456
        OnClick = EditReplaceClick
      end
      object N5: TMenuItem
        Tag = -1
        Caption = '-'
      end
      object EditObjPropsItem: TMenuItem
        Tag = -1
        Caption = 'Propiedades do Ob&jeto'
        Hint = 'Op'#231#245'es do objeto'
        ShortCut = 32781
        OnClick = EditObjPropsItemClick
      end
    end
    object InsertMenu: TMenuItem
      Tag = -1
      Caption = '&Inserir'
      GroupIndex = 3
      object InsertObjectItem: TMenuItem
        Tag = -1
        Caption = '&Objeto...'
        Hint = 'Insere um objeto especificado'
        OnClick = InsertObject
      end
      object InsertImageItem: TMenuItem
        Tag = -1
        Caption = '&Figura...'
        Hint = 'Insere uma figura'
        OnClick = InsertBitmap
      end
      object Pokmon1: TMenuItem
        Tag = -1
        Caption = 'Po&k'#233'mon Atual'
        OnClick = Pokmon1Click
      end
      object TextodoPokmon1: TMenuItem
        Caption = 'Texto do &Pok'#233'mon'
        OnClick = TextodoPokmon1Click
      end
    end
    object FormatMenu: TMenuItem
      Tag = -1
      Caption = 'F&ormatar'
      GroupIndex = 5
      object FormatFontItem: TMenuItem
        Tag = 12
        Caption = '&Fonte...'
        Hint = 'Escolhe a cor, letra e o tamanho da fonte'
        OnClick = SelectFont
      end
      object FormatParagraphItem: TMenuItem
        Tag = 25
        Caption = '&Paragrafo...'
        Hint = 'Modifica a posi'#231#227'o do paragrafo'
        OnClick = FormatParaAttributes
      end
      object N6: TMenuItem
        Tag = -1
        Caption = '-'
      end
      object ProtectedItem: TMenuItem
        Tag = -1
        Caption = 'Prote&ger'
        Hint = 'Protege o texto ou item selecionado'
        OnClick = ProtectedItemClick
      end
      object DisabledItem: TMenuItem
        Tag = -1
        Caption = '&Desabilitado'
        Hint = 'Desprotege o texto ou item selecionado'
        OnClick = DisabledItemClick
      end
      object HiddenItem: TMenuItem
        Tag = -1
        Caption = 'E&scondido'
        Hint = 'Te vira'
        OnClick = HiddenItemClick
      end
    end
    object HelpMenu: TMenuItem
      Tag = -1
      Caption = 'Aj&uda'
      GroupIndex = 7
      object HelpAboutItem: TMenuItem
        Tag = -1
        Caption = '&Sobre...'
        Hint = 'Exibe as informa'#231#245'es do programa'
        OnClick = HelpAbout
      end
    end
  end
  object OpenDialog: TOpenDialog
    Filter = 'Rich Text Files (*.RTF)|*.RTF|Text Files (*.TXT)|*.TXT'
    Left = 64
    Top = 100
  end
  object SaveDialog: TSaveDialog
    Filter = 'Rich Text Files (*.RTF)|*.RTF|Text Files (*.TXT)|*.TXT'
    Options = [ofOverwritePrompt, ofHideReadOnly]
    Left = 92
    Top = 100
  end
  object PrintDialog: TPrintDialog
    Left = 120
    Top = 100
  end
  object FontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Device = fdBoth
    MinFontSize = 0
    MaxFontSize = 0
    Left = 36
    Top = 100
  end
  object ColorMenu: TRxPopupMenu
    OnPopup = ColorMenuPopup
    MinTextOffset = 20
    Style = msOwnerDraw
    OnDrawItem = ColorMenuDrawItem
    Left = 92
    Top = 128
  end
  object EditPopupMenu: TRxPopupMenu
    Images = ToolbarImages
    ShowCheckMarks = False
    OnGetImageIndex = EditPopupMenuGetImageIndex
    OnMeasureItem = MainMenuMeasureItem
    Left = 36
    Top = 128
    object CutItm: TMenuItem
      Tag = 6
      Caption = '&Recortar'
      GroupIndex = 10
      ShortCut = 16472
      OnClick = EditCut
    end
    object CopyItm: TMenuItem
      Tag = 7
      Caption = '&Copiar'
      GroupIndex = 10
      ShortCut = 16451
      OnClick = EditCopy
    end
    object PasteItm: TMenuItem
      Tag = 8
      Caption = 'C&olar'
      GroupIndex = 10
      ShortCut = 16470
      OnClick = EditPaste
    end
    object N7: TMenuItem
      Tag = -1
      Caption = '-'
      GroupIndex = 10
    end
    object Fechar1: TMenuItem
      Caption = '&Fechar'
      GroupIndex = 10
      ShortCut = 16472
      OnClick = Fechar1Click
    end
    object Sair2: TMenuItem
      Caption = 'S&air'
      GroupIndex = 10
      ShortCut = 32883
      OnClick = Sair2Click
    end
  end
  object BackgroundMenu: TRxPopupMenu
    OnPopup = BackgroundMenuPopup
    MinTextOffset = 20
    Style = msOwnerDraw
    OnDrawItem = ColorMenuDrawItem
    Left = 64
    Top = 128
  end
  object ToolbarImages: TImageList
    Left = 8
    Top = 100
    Bitmap = {
      367000001A000000424D36700000000000003600000028000000400000007000
      0000010020000000000000700000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      000000000000000000007F7F7F00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000FF
      FF00FFFFFF00FFFFFF00FFFFFF0000FFFF00FFFFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      000000000000000000007F7F7F00FFFFFF000000000000FFFF00FFFFFF00FFFF
      FF00FFFFFF0000FFFF00FFFFFF00FFFFFF00FFFFFF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      00008000000080000000800000000F0700008F482F00D0704000D0704000D070
      4000D07040008000000080000000800000008000000080000000800000000000
      000000000000000000007F7F7F00000000007F7F7F0000000000FFFFFF0000FF
      FF00FFFFFF00FFFFFF00FFFFFF0000FFFF00FFFFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      00000000000000000000000000007F7F7F007F7F7F007F7F7F0000000000FFFF
      FF00FFFFFF0000FFFF007F7F7F00FFFFFF00FFFFFF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      00000000000000000000BFBFBF00BFBFBF00BFBFBF007F7F7F007F7F7F000000
      0000FFFFFF00FFFFFF007F0000007F7F7F00FFFFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000007F7F
      7F007F0000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      000000000000FFFFFF00BFBFBF00BFBFBF00BFBFBF00BFBFBF007F7F7F007F7F
      7F000000000000FFFF007F0000007F000000FFFFFF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      00007F0000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      0000BFBFBF00FFFFFF00FFFFFF00BFBFBF00BFBFBF00BFBFBF00BFBFBF007F7F
      7F007F7F7F007F0000007F0000007F000000FFFFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      00007F0000007F000000000000007F0000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      00000F0700008F482F00D0704000D0704000DF804F0080000000FFFFFF400000
      000000000000BFBFBF00FFFFFF00FFFFFF00BFBFBF0000000000BFBFBF00BFBF
      BF007F7F7F007F0000007F0000007F000000FFFFFF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000007F7F
      7F007F0000007F0000007F0000007F0000007F00000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      00000000000000000000BFBFBF00FFFFFF00000000007F00000000000000BFBF
      BF007F0000007F0000007F0000007F7F7F00FFFFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      0000000000000000000000000000BFBFBF00FFFFFF007F000000BFBFBF007F7F
      7F007F0000007F0000007F7F7F00FFFFFF00FFFFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      000000000000000000007F00000000000000BFBFBF007F0000007F7F7F000000
      00007F7F7F00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      000000000000000000007F000000BFBFBF00000000007F000000000000007F7F
      7F00FFFFFF0000FFFF00FFFFFF007F7F7F00BFBFBF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      000080000000800000008000000080000000800000000F07000090502F000000
      000000000000000000007F000000BFBFBF00BFBFBF007F0000007F7F7F0000FF
      FF00FFFFFF00FFFFFF00FFFFFF007F7F7F000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      000000000000000000007F7F7F007F0000007F0000007F7F7F007F7F7F007F7F
      7F007F7F7F007F7F7F007F7F7F007F7F7F000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000008000
      0000800000008000000080000000800000008000000080000000800000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000007F00000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F00000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000007F0000007F0000007F000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000007F0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000007F00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000007F000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000007F0000007F00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000FFFF00FFFF
      FF0000FFFF00FFFFFF0000FFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000BFBFBF000000
      0000BFBFBF0000FFFF00FFFFFF0000FFFF00FFFFFF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000FFFF
      000000000000BFBFBF0000000000BFBFBF0000FFFF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000BFBFBF000000
      0000BFBFBF00000000000000FF0000000000FFFFFF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000FFFF00FFFF
      FF0000FFFF00BFBFBF0000000000BFBFBF0000FFFF00FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000FFFF00FFFFFF0000FFFF00FFFFFF0000FF
      FF00FFFFFF0000FFFF00BFBFBF0000000000BFBFBF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00BFBFBF0000000000BFBFBF00FFFF
      FF0000FFFF00FFFFFF0000000000BFBFBF0000000000FFFFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000FFFF00000000007F007F0000000000BFBF
      BF0000000000BFBFBF00BFBFBF0000000000BFBFBF0000FFFF00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00BFBFBF0000000000BFBFBF000000
      0000000000000000000000FFFF00FFFFFF0000FFFF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF0000FFFF00FFFFFF00BFBF
      BF0000000000BFBFBF00FFFFFF0000FFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000FFFF00FFFF
      FF0000FFFF00FFFFFF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000007F0000007F0000007F00
      00007F0000007F0000007F0000007F0000007F0000007F0000007F0000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000007F000000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F0000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000FF
      FF00FFFFFF0000000000FFFFFF0000FFFF000000000000000000000000000000
      00007F7F7F00007F7F007F7F7F00007F7F007F7F7F007F000000FFFFFF000000
      00000000000000000000000000000000000000000000FFFFFF007F0000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000FFFF00FFFF
      FF0000FFFF00FFFFFF0000FFFF00FFFFFF0000FFFF0000000000000000000000
      0000007F7F007F7F7F00007F7F007F7F7F00007F7F007F000000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F0000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FFFFFF0000FF
      FF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF0000000000000000000000
      00007F7F7F00007F7F007F7F7F00007F7F007F7F7F007F000000FFFFFF000000
      00000000000000000000FFFFFF007F0000007F0000007F0000007F0000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000007F0000000000000000000000000000000000
      000000000000000000007F000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000FFFF
      FF0000FFFF000000000000000000000000000000000000000000000000000000
      0000007F7F007F7F7F00007F7F007F7F7F00007F7F007F000000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007F000000FFFFFF007F000000000000000000
      0000000000007F0000007F0000007F0000007F0000007F000000000000000000
      00000000000000000000000000007F0000000000000000000000000000000000
      000000000000000000007F000000000000000000000000000000000000000000
      00007F0000007F0000007F0000007F0000007F00000000000000000000007F00
      00007F0000007F0000007F0000007F0000007F00000000000000FFFFFF0000FF
      FF00FFFFFF0000000000FFFFFF0000FFFF00FFFFFF0000000000000000000000
      00007F7F7F00007F7F007F7F7F00007F7F007F7F7F007F000000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007F0000007F00000000000000000000000000
      0000000000007F0000007F0000007F0000007F00000000000000000000000000
      0000000000000000000000000000000000007F00000000000000000000000000
      0000000000007F00000000000000000000000000000000000000000000000000
      0000000000007F0000007F0000007F0000007F00000000000000000000007F00
      0000FFFFFF00BFBFBF00FFFFFF00BFBFBF00FFFFFF000000000000FFFF00FFFF
      FF0000FFFF000000000000FFFF00FFFFFF0000FFFF0000000000000000000000
      0000007F7F007F7F7F00007F7F007F7F7F00007F7F007F0000007F0000007F00
      00007F0000007F0000007F0000007F0000000000000000000000000000000000
      0000000000007F0000007F0000007F0000000000000000000000000000000000
      0000000000000000000000000000000000007F00000000000000000000000000
      0000000000007F00000000000000000000000000000000000000000000000000
      000000000000000000007F0000007F0000007F00000000000000000000007F00
      0000BFBFBF00FFFFFF0000007F00FFFFFF0000007F0000007F000000000000FF
      FF00FFFFFF0000000000FFFFFF0000FFFF000000000000000000000000000000
      00007F7F7F00007F7F007F7F7F00007F7F007F7F7F00007F7F007F7F7F00007F
      7F007F7F7F00007F7F007F7F7F00007F7F000000000000000000000000000000
      0000000000007F0000007F000000000000007F00000000000000000000000000
      0000000000000000000000000000000000007F00000000000000000000000000
      0000000000007F00000000000000000000000000000000000000000000000000
      0000000000007F000000000000007F0000007F00000000000000000000007F00
      0000FFFFFF00BFBFBF0000007F00BFBFBF0000007F00BFBFBF00FFFFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000007F7F00007F7F0000000000000000000000000000000000000000000000
      000000000000000000007F7F7F007F7F7F000000000000000000000000000000
      0000000000007F0000000000000000000000000000007F0000007F0000000000
      00000000000000000000000000007F0000000000000000000000000000000000
      000000000000000000007F000000000000000000000000000000000000007F00
      00007F0000000000000000000000000000007F00000000000000000000007F00
      0000BFBFBF0000007F0000007F00FFFFFF00BFBFBF0000007F00BFBFBF007F00
      0000000000000000000000000000000000000000000000000000000000000000
      00007F7F7F007F7F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00000000007F7F7F00007F7F000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      00007F0000007F0000007F000000000000000000000000000000000000000000
      00000000000000000000000000007F0000007F0000007F0000007F0000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      0000FFFFFF00BFBFBF0000007F00BFBFBF0000007F0000007F00FFFFFF007F00
      0000000000000000000000000000000000000000000000000000000000000000
      0000007F7F007F7F7F00007F7F000000000000FFFF00000000000000000000FF
      FF00000000007F7F7F00007F7F007F7F7F000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      0000BFBFBF00FFFFFF00BFBFBF00FFFFFF00BFBFBF00FFFFFF00BFBFBF007F00
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000FFFF0000FFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      00007F0000007F0000007F0000007F0000007F0000007F0000007F0000007F00
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      0000FF0000007F000000FF000000FF000000FF0000007F000000FF0000007F00
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000007F00
      00007F0000007F0000007F0000007F0000007F0000007F0000007F0000007F00
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000007F0000007F000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0000000000000000000000000000000000000000000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      00000000000000000000BFBFBF00000000000000000000000000000000000000
      00000000000000000000000000007F00000000000000000000007F0000000000
      0000000000007F0000007F000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F0000007F00
      00007F0000007F0000007F0000007F0000007F0000007F0000007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      00000000000000000000BFBFBF00000000000000000000000000000000000000
      00000000000000000000000000007F00000000000000000000007F0000000000
      00007F00000000000000000000007F0000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F000000FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000007F7F
      7F00BFBFBF00BFBFBF007F7F7F0000000000FFFFFF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000007F00000000000000000000007F0000000000
      00007F00000000000000000000007F0000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F000000FFFF
      FF000000000000000000000000000000000000000000FFFFFF007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000007F7F7F00BFBF
      BF00BFBFBF00FFFF00007F7F7F00FFFFFF000000000000000000000000000000
      000000000000BFBFBF0000000000000000000000000000000000000000000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000007F0000007F0000007F0000000000
      00007F00000000000000000000007F0000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F000000FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000000000BFBFBF00BFBF
      BF00BFBFBF00BFBFBF007F7F7F00BFBFBF000000000000000000000000000000
      000000000000BFBFBF00000000000000000000000000BFBFBF00000000000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F0000000000
      00007F0000007F0000007F000000000000000000000000000000000000000000
      000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F000000FFFF
      FF000000000000000000000000000000000000000000FFFFFF007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000000000BFBFBF00FFFF
      0000BFBFBF00BFBFBF007F7F7F00BFBFBF000000000000000000000000000000
      000000000000BFBFBF00000000000000000000000000BFBFBF00000000000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F0000000000
      00007F0000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00000000000000000000000000000000007F000000FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000007F7F7F00FFFF
      0000FFFF0000BFBFBF007F7F7F00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F000000FFFF
      FF000000000000000000FFFFFF007F0000007F0000007F0000007F0000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000007F7F
      7F00BFBFBF00BFBFBF007F7F7F00000000000000000000000000000000000000
      00000000000000000000BFBFBF00000000000000000000000000000000000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00000000000000000000000000000000007F000000FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007F000000FFFFFF007F000000000000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF007F000000FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007F0000007F00000000000000000000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF000000000000000000FFFFFF00000000007F0000007F00
      00007F0000007F0000007F0000007F0000000000000000000000000000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000BFBFBF000000000000000000000000000000
      000000000000BFBFBF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF0000000000FFFFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000
      0000BFBFBF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000007F7F00007F7F00000000000000000000000000000000000000
      000000000000BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      000000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF0000000000BFBFBF000000000000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      000000000000007F7F00007F7F00007F7F00007F7F00007F7F00007F7F00007F
      7F00007F7F00007F7F0000000000000000000000000000000000000000000000
      000000000000007F7F00007F7F00000000000000000000000000000000000000
      000000000000BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000BFBFBF0000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      000000FFFF0000000000007F7F00007F7F00007F7F00007F7F00007F7F00007F
      7F00007F7F00007F7F00007F7F00000000000000000000000000000000000000
      000000000000007F7F00007F7F00000000000000000000000000000000000000
      000000000000BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      0000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF0000FFFF0000FF
      FF0000FFFF00BFBFBF00BFBFBF00000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000FFFFFF0000FFFF00FFFFFF00007F7F00007F7F00007F7F00007F7F00007F
      7F00007F7F00007F7F00007F7F00007F7F000000000000000000000000000000
      000000000000007F7F00007F7F00000000000000000000000000000000000000
      000000000000000000000000000000000000007F7F0000000000000000000000
      0000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF007F7F7F007F7F
      7F007F7F7F00BFBFBF00BFBFBF0000000000BFBFBF0000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      000000FFFF00FFFFFF0000FFFF0000000000007F7F00007F7F00007F7F00007F
      7F00007F7F00007F7F00007F7F00007F7F00007F7F0000000000000000000000
      000000000000007F7F00007F7F00007F7F00007F7F00007F7F00007F7F00007F
      7F00007F7F00007F7F00007F7F00007F7F00007F7F0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000BFBFBF00BFBFBF00000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000FFFFFF0000FFFF00FFFFFF0000FFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000007F7F00007F7F00000000000000000000000000000000000000
      0000000000000000000000000000007F7F00007F7F0000000000000000000000
      0000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF0000000000BFBFBF0000000000BFBFBF00000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      000000FFFF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFF
      FF0000FFFF000000000000000000000000000000000000000000000000000000
      000000000000007F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000BFBFBF0000000000BFBFBF0000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF0000FF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      000000000000007F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      00000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0000000000BFBFBF0000000000BFBFBF00000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      000000FFFF00FFFFFF0000FFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000007F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      0000000000000000000000000000FFFFFF000000000000000000000000000000
      000000000000FFFFFF0000000000000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000007F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF00BFBFBF0000000000007F7F0000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF0000000000FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000007F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF00BFBFBF00000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF0000000000000000000000
      00000000000000000000FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000007F7F0000000000BFBFBF00BFBFBF00BFBFBF00BFBFBF00BFBF
      BF00BFBFBF00BFBFBF00BFBFBF0000000000BFBFBF0000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000424D
      BE030000000000003E0000002800000040000000700000000100010000000000
      800300000000000000000000020000000000000000000000FFFFFF00E000FFFF
      DFE30003E00081D7DFD30007E000FFD7EF3B003FE000FFD7F0FF003FE00081D7
      FFFF003FC000FF17FFFF003F8000FF17FFFF003F00008117FFFF007F8000FF03
      FFFFFFFFC000FFFFF9FFFFFFE0008003F6CFFE00E000FFFFF6B7FE00E001FFFF
      F6B7FE00E003F803F8B78000E007FFFFFE8F8000FFFFFFFFFE3F8000FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF8FFFFFFFFFFFFFFF8C03FFFFFFFFC0038FFFE67F
      FF8FFFFFFFFFF0FFFFBFC003FFFFF9FFFFDFFFFF8FFFF0FFFFEFC0038C03E67F
      CC9FFFFF8FFFFFC7E1FFC003FFFFFFDFF3FFFFFFFFFFFFEFE1FFC0038FFFFFF7
      CCFFFFFF8C03FFCFFFFFC0038FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF11FFFFFFFFFFFFFFBBFFFFFFFFFFFFFF820FC007C007C007D403FFFF
      FFFFFFFFC401C03FF83FF807EE01FFFFFFFFFFFFEC00C007C007C007F000FFFF
      FFFFFFFFE000C03FF01FF807E000FFFFFFFFFFFFE000C007C007C007E041FFFF
      FFFFFFFFF003C03FF83FF807F807FFFFFFFFFFFFFE1FFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF8701FFFFFFFFE00FEFC7FFFFFFFFFFFFEF87F00F
      81FFF83FF00FF8C7E3FFF39FF70FF8C7F1FFF39FF71FF8C7F8FFF39FFA1FF80F
      FC7FF39FFA3FF8C7FE3FF39FFC3FF8C7FF1FF39FFC7FF8C7FF8FF39FFC7FF00F
      FF03E10FFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFC00FFFFFFFFFF078000FFFFFFFFFE030000FFFFFFFFFC010000FFFF
      FFFFFC010000FFF7EFFF80010001C1F7EF8300010003C3FBDFC300010003C7FB
      DFE300030003CBFBDFD300070003DCF7EF3B003F0003FF0FF0FF003F0003FFFF
      FFFF003F8007FFFFFFFF003FF87FFFFFFFFF003FFFFFFFFFFFFF007FFFFFFFFF
      FFFFFFFF000C07C1F9FFFFFF000807C1F6CFFE00000107C1F6B7FE0000030101
      F6B7FE0000018001F8B7800000030001FE8F800000030001FE3F800000038003
      FF7F80000007C107FE3F8001000FC107FEBF8003000FE38FFC9F8007000FE38F
      FDDF807F001FE38FFDDF80FF003FFFFFFDDF81FF007FFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFC001C007E003001F80018003E003000F80010001E0030007
      80010001E003000380010001E003000180010000E003000080010000E003001F
      80018000E003001F8001C000E003001F8001E001E0038FF18001E007E007FFF9
      8001F007E00FFF758001F003E01FFF8F8001F803FFFFFFFFFFFFFFFF}
  end
  object App: TAppEvents
    OnActivate = FormActivate
    OnHint = ShowHint
    Left = 120
    Top = 128
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 152
    Top = 104
  end
end
