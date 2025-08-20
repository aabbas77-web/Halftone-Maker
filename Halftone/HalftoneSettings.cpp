//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HalftoneSettings.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormHalftoneSettings *FormHalftoneSettings;
//---------------------------------------------------------------------------
__fastcall TFormHalftoneSettings::TFormHalftoneSettings(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormHalftoneSettings::ScrollBarThresholdDividerChange(
      TObject *Sender)
{
	PanelThresholdDivider->Caption = FloatToStr(ScrollBarThresholdDivider->Position/100.0);	
}
//---------------------------------------------------------------------------

void __fastcall TFormHalftoneSettings::ScrollBarLevelsCountChange(
      TObject *Sender)
{
	PanelLevelsCount->Caption = IntToStr(ScrollBarLevelsCount->Position);	
}
//---------------------------------------------------------------------------

void __fastcall TFormHalftoneSettings::ScrollBarMaxElementSizeChange(
      TObject *Sender)
{
	PanelMaxElementSize->Caption = IntToStr(ScrollBarMaxElementSize->Position);
    ScrollBarMinElementSize->Max = ScrollBarMaxElementSize->Position - 1;
}
//---------------------------------------------------------------------------

void __fastcall TFormHalftoneSettings::ScrollBarMinElementSizeChange(
      TObject *Sender)
{
	PanelMinElementSize->Caption = IntToStr(ScrollBarMinElementSize->Position);
}
//---------------------------------------------------------------------------


void __fastcall TFormHalftoneSettings::FormCreate(TObject *Sender)
{
	ComboBoxElementType->ItemIndex = 0;	
}
//---------------------------------------------------------------------------

void __fastcall TFormHalftoneSettings::ScrollBarScaleChange(
      TObject *Sender)
{
	PanelScale->Caption = IntToStr(ScrollBarScale->Position);
}
//---------------------------------------------------------------------------

void __fastcall TFormHalftoneSettings::ScrollBarMaxStepSizeChange(
      TObject *Sender)
{
	PanelMaxStepSize->Caption = IntToStr(ScrollBarMaxStepSize->Position);
    ScrollBarMinStepSize->Max = ScrollBarMaxStepSize->Position - 1;
}
//---------------------------------------------------------------------------

void __fastcall TFormHalftoneSettings::ScrollBarMinStepSizeChange(
      TObject *Sender)
{
	PanelMinStepSize->Caption = IntToStr(ScrollBarMinStepSize->Position);
}
//---------------------------------------------------------------------------

