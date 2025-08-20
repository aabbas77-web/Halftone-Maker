//---------------------------------------------------------------------------

#ifndef HalftoneSettingsH
#define HalftoneSettingsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TFormHalftoneSettings : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TLabel *Label1;
	TComboBox *ComboBoxElementType;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TLabel *Label2;
	TScrollBar *ScrollBarThresholdDivider;
	TLabel *Label3;
	TScrollBar *ScrollBarLevelsCount;
	TPanel *PanelThresholdDivider;
	TPanel *PanelLevelsCount;
	TPanel *PanelMaxElementSize;
	TScrollBar *ScrollBarMaxElementSize;
	TLabel *Label4;
	TPanel *PanelMinElementSize;
	TScrollBar *ScrollBarMinElementSize;
	TLabel *Label5;
	TLabel *Label7;
	TScrollBar *ScrollBarScale;
	TPanel *PanelScale;
	TLabel *Label8;
	TScrollBar *ScrollBarMaxStepSize;
	TLabel *Label9;
	TScrollBar *ScrollBarMinStepSize;
	TPanel *PanelMinStepSize;
	TPanel *PanelMaxStepSize;
	void __fastcall ScrollBarThresholdDividerChange(TObject *Sender);
	void __fastcall ScrollBarLevelsCountChange(TObject *Sender);
	void __fastcall ScrollBarMaxElementSizeChange(TObject *Sender);
	void __fastcall ScrollBarMinElementSizeChange(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ScrollBarScaleChange(TObject *Sender);
	void __fastcall ScrollBarMaxStepSizeChange(TObject *Sender);
	void __fastcall ScrollBarMinStepSizeChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormHalftoneSettings(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormHalftoneSettings *FormHalftoneSettings;
//---------------------------------------------------------------------------
#endif
