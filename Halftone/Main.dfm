object FormMain: TFormMain
  Left = 180
  Top = 118
  Width = 544
  Height = 375
  Caption = 'Halftone Maker V1.0'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object ScrollBox: TScrollBox
    Left = 0
    Top = 18
    Width = 528
    Height = 279
    HorzScrollBar.Tracking = True
    VertScrollBar.Tracking = True
    Align = alClient
    Color = clWhite
    ParentColor = False
    TabOrder = 0
    object Image: TImage
      Left = 0
      Top = 0
      Width = 100
      Height = 100
      Stretch = True
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 297
    Width = 528
    Height = 19
    Panels = <>
    SimplePanel = False
  end
  object ScrollBar: TScrollBar
    Left = 0
    Top = 0
    Width = 528
    Height = 18
    Align = alTop
    Max = 10000
    PageSize = 0
    TabOrder = 2
    OnChange = ScrollBarChange
  end
  object OpenPictureDialog: TOpenPictureDialog
    DefaultExt = 'jpg'
    Filter = 
      'All (*.jpg;*.jpeg;*.bmp)|*.jpg;*.jpeg;*.bmp|JPEG Image File (*.j' +
      'pg)|*.jpg|JPEG Image File (*.jpeg)|*.jpeg|Bitmaps (*.bmp)|*.bmp|' +
      'Enhanced Metafile (*.emf)|*.emf'
    Left = 224
    Top = 132
  end
  object MainMenu1: TMainMenu
    Left = 252
    Top = 104
    object File1: TMenuItem
      Action = AFile
      object Open1: TMenuItem
        Action = AFileOpen
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Saveas1: TMenuItem
        Action = AFileSaveAs
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Action = AFileExit
      end
    end
    object Halftone1: TMenuItem
      Action = AHalftone
      object Make1: TMenuItem
        Action = AHalftoneMake
      end
    end
    object Help1: TMenuItem
      Action = AHelp
      object Contents1: TMenuItem
        Action = AHelpContents
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object Contents2: TMenuItem
        Action = AHelpAbout
      end
    end
  end
  object SavePictureDialog: TSavePictureDialog
    DefaultExt = 'jpg'
    Filter = 
      'All (*.jpg;*.bmp;*.emf)|*.jpg;*.bmp;*.emf|JPEG Image File (*.jpg' +
      ')|*.jpg|Bitmaps (*.bmp)|*.bmp|Enhanced Metafiles (*.emf)|*.emf'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 252
    Top = 132
  end
  object ActionList1: TActionList
    Left = 224
    Top = 104
    object AFile: TAction
      Category = 'File'
      Caption = '&File'
      OnExecute = AFileExecute
    end
    object AFileOpen: TAction
      Category = 'File'
      Caption = '&Open...'
      OnExecute = AFileOpenExecute
    end
    object AFileSaveAs: TAction
      Category = 'File'
      Caption = 'Save &as...'
      OnExecute = AFileSaveAsExecute
    end
    object AFileExit: TAction
      Category = 'File'
      Caption = 'E&xit'
      ShortCut = 16472
      OnExecute = AFileExitExecute
    end
    object AHelp: TAction
      Category = 'Help'
      Caption = '&Help'
      OnExecute = AHelpExecute
    end
    object AHelpContents: TAction
      Category = 'Help'
      Caption = '&Contents...'
      OnExecute = AHelpContentsExecute
    end
    object AHelpAbout: TAction
      Category = 'Help'
      Caption = '&About...'
      OnExecute = AHelpAboutExecute
    end
    object AHalftone: TAction
      Category = 'Halftone'
      Caption = 'Half&tone'
      OnExecute = AHalftoneExecute
    end
    object AHalftoneMake: TAction
      Category = 'Halftone'
      Caption = '&Make...'
      OnExecute = AHalftoneMakeExecute
    end
  end
end
