object FormHalftoneSettings: TFormHalftoneSettings
  Left = 190
  Top = 105
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Halftone Settings'
  ClientHeight = 369
  ClientWidth = 267
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 334
    Width = 267
    Height = 35
    Align = alBottom
    TabOrder = 0
    object BitBtn1: TBitBtn
      Left = 58
      Top = 5
      Width = 75
      Height = 25
      TabOrder = 0
      Kind = bkOK
    end
    object BitBtn2: TBitBtn
      Left = 136
      Top = 5
      Width = 75
      Height = 25
      TabOrder = 1
      Kind = bkCancel
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 267
    Height = 334
    Align = alClient
    TabOrder = 1
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 65
      Height = 13
      Caption = 'Element Type'
    end
    object Label2: TLabel
      Left = 8
      Top = 52
      Width = 83
      Height = 13
      Caption = 'Threshold Divider'
    end
    object Label3: TLabel
      Left = 8
      Top = 92
      Width = 62
      Height = 13
      Caption = 'Levels Count'
    end
    object Label4: TLabel
      Left = 8
      Top = 132
      Width = 84
      Height = 13
      Caption = 'Max Element Size'
    end
    object Label5: TLabel
      Left = 8
      Top = 172
      Width = 81
      Height = 13
      Caption = 'Min Element Size'
    end
    object Label7: TLabel
      Left = 8
      Top = 212
      Width = 27
      Height = 13
      Caption = 'Scale'
    end
    object Label8: TLabel
      Left = 8
      Top = 252
      Width = 68
      Height = 13
      Caption = 'Max Step Size'
    end
    object Label9: TLabel
      Left = 8
      Top = 292
      Width = 65
      Height = 13
      Caption = 'Min Step Size'
    end
    object ComboBoxElementType: TComboBox
      Left = 8
      Top = 24
      Width = 200
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      Items.Strings = (
        'Ellipse'
        'Rectangle')
    end
    object ScrollBarThresholdDivider: TScrollBar
      Left = 8
      Top = 68
      Width = 200
      Height = 18
      Min = 1
      PageSize = 0
      Position = 50
      TabOrder = 1
      OnChange = ScrollBarThresholdDividerChange
    end
    object ScrollBarLevelsCount: TScrollBar
      Left = 8
      Top = 108
      Width = 200
      Height = 18
      Max = 255
      PageSize = 0
      Position = 6
      TabOrder = 2
      OnChange = ScrollBarLevelsCountChange
    end
    object PanelThresholdDivider: TPanel
      Left = 212
      Top = 68
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '0.5'
      TabOrder = 3
    end
    object PanelLevelsCount: TPanel
      Left = 212
      Top = 108
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '6'
      TabOrder = 4
    end
    object PanelMaxElementSize: TPanel
      Left = 212
      Top = 148
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '6'
      TabOrder = 5
    end
    object ScrollBarMaxElementSize: TScrollBar
      Left = 8
      Top = 148
      Width = 200
      Height = 18
      Max = 1000
      Min = 2
      PageSize = 0
      Position = 6
      TabOrder = 6
      OnChange = ScrollBarMaxElementSizeChange
    end
    object PanelMinElementSize: TPanel
      Left = 212
      Top = 188
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '0'
      TabOrder = 7
    end
    object ScrollBarMinElementSize: TScrollBar
      Left = 8
      Top = 188
      Width = 200
      Height = 18
      Max = 1000
      PageSize = 0
      TabOrder = 8
      OnChange = ScrollBarMinElementSizeChange
    end
    object ScrollBarScale: TScrollBar
      Left = 8
      Top = 228
      Width = 200
      Height = 18
      Min = 1
      PageSize = 0
      Position = 2
      TabOrder = 9
      OnChange = ScrollBarScaleChange
    end
    object PanelScale: TPanel
      Left = 212
      Top = 228
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '2'
      TabOrder = 10
    end
    object ScrollBarMaxStepSize: TScrollBar
      Left = 8
      Top = 268
      Width = 200
      Height = 18
      Max = 1000
      Min = 2
      PageSize = 0
      Position = 6
      TabOrder = 11
      OnChange = ScrollBarMaxStepSizeChange
    end
    object ScrollBarMinStepSize: TScrollBar
      Left = 8
      Top = 308
      Width = 200
      Height = 18
      Max = 1000
      PageSize = 0
      TabOrder = 12
      OnChange = ScrollBarMinStepSizeChange
    end
    object PanelMinStepSize: TPanel
      Left = 212
      Top = 308
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '0'
      TabOrder = 13
    end
    object PanelMaxStepSize: TPanel
      Left = 212
      Top = 268
      Width = 50
      Height = 18
      BevelInner = bvLowered
      BevelOuter = bvNone
      Caption = '6'
      TabOrder = 14
    end
  end
end
