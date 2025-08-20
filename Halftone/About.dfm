object FormAbout: TFormAbout
  Left = 711
  Top = 118
  BiDiMode = bdLeftToRight
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'About'
  ClientHeight = 241
  ClientWidth = 202
  Color = clBtnFace
  Font.Charset = ARABIC_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ParentBiDiMode = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 202
    Height = 241
    Align = alClient
    BevelOuter = bvNone
    TabOrder = 0
    object Bevel2: TBevel
      Left = 4
      Top = 196
      Width = 194
      Height = 9
    end
    object Label2: TLabel
      Left = 5
      Top = 24
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'Halftone Maker V1.0'
    end
    object Label1: TLabel
      Left = 5
      Top = 4
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'AliSoft'
      Font.Charset = ARABIC_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 5
      Top = 44
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
    end
    object Label7: TLabel
      Left = 5
      Top = 64
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
    end
    object Label4: TLabel
      Left = 5
      Top = 84
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'www.HodHods.com'
      Font.Charset = ARABIC_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 5
      Top = 123
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'E-Mail: aabbas7@gmail.com'
    end
    object Label6: TLabel
      Left = 5
      Top = 143
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
    end
    object Image2: TImage
      Left = 161
      Top = 44
      Width = 32
      Height = 32
      AutoSize = True
      Picture.Data = {
        055449636F6E0000010001002020100000000000E80200001600000028000000
        2000000040000000010004000000000080020000000000000000000000000000
        0000000000000000000080000080000000808000800000008000800080800000
        80808000C0C0C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000
        FFFFFF00999999999999999999999999999999999CC000000000000000000000
        00000CC99CC000000000B00000000B0000000CC99CC000000000400008000400
        08080CC99CC00000000030000000030000000CC99CC008080000C00000000C00
        08080CC99CC000000000C00008080C0000000CC99CC008080800C00000000C00
        00000CC99CC000000000C0080C00CC0000000CC99CCCC00C0000C0000C00CC00
        00000CC99CCCC00C0000C0000C00CC00000CCCC99CCCC00C0000C0000CCCCC00
        000CCCC99CCCCCCC0000C0030CCCCC00000CCCC99CCCCCCC0300C0000CCCCC00
        000CCCC99CCCCC9C0000CC00CCCCCC00000CCCC99CCCCCCC0300CCCCCCCCCC00
        000CCCC99CCCCCCC0000CCCFCCCCCC00080CCCC99CCCFCCC0808CCCCCCCCCCCC
        000CCCC99CCCCCCC0000CCCCCCCCFCCC080CCCC99CCCCCCC0808CCCCCCCCCCCC
        000CCFC99CCCCCCC0000CCCCCCCCCCCCC0CCCCC99CCCCCCC0808CCCCCCCCCCCC
        C0CCCCC99CCCCCCC0000CCCCFCCCCCCCC0CCCCC99CCCCCCCC00CCCCCCCCCCCCC
        CCCCCCC99CCCFCCCC00CCCCCCCCCFCCCCCCCCCC99CCCCCCCCCCCCCCCCCCCCCCC
        CC9CCCC99CCCCCCCCCCCCCCCCFCCCCCCCCCCCCC99CCCCCCCCCCCCCCCCCCCCFCC
        CCCCCCC99CCCCCCC6FCCCCCCCCCCCCCCCCCCFCC99CCCCCCCCCCCCCCCCCCCCCCC
        CCCCCCC99CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC9999999999999999999999999
        9999999900000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000}
    end
    object Image1: TImage
      Left = 9
      Top = 44
      Width = 32
      Height = 32
      AutoSize = True
      Center = True
    end
    object Label8: TLabel
      Left = 5
      Top = 104
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'Dr. Ali Abbas'
    end
    object Label9: TLabel
      Left = 5
      Top = 158
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
    end
    object Label10: TLabel
      Left = 5
      Top = 176
      Width = 194
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'Last update: 20/08/2025'
    end
    object Button1: TButton
      Left = 64
      Top = 212
      Width = 75
      Height = 25
      Caption = '&Ok'
      Default = True
      TabOrder = 0
      OnClick = Button1Click
    end
  end
end
