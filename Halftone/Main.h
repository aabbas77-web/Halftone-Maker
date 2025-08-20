//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
#include <JPEG.hpp>
//---------------------------------------------------------------------------
#include "spl_Image.h"
#include <ActnList.hpp>
//---------------------------------------------------------------------------
const AnsiString c_strDemoVersion =
	"·« Ì„ﬂ‰ﬂ «·Õ›Ÿ »«” Œœ«„ Â–Â «·‰”Œ…° ·√‰Â« ‰”Œ…  Ã—Ì»Ì…";
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TOpenPictureDialog *OpenPictureDialog;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *Open1;
	TMenuItem *N1;
	TMenuItem *Exit1;
	TScrollBox *ScrollBox;
	TStatusBar *StatusBar1;
	TImage *Image;
	TSavePictureDialog *SavePictureDialog;
	TMenuItem *Saveas1;
	TMenuItem *N2;
	TActionList *ActionList1;
	TAction *AFile;
	TAction *AFileOpen;
	TAction *AFileSaveAs;
	TAction *AFileExit;
	TAction *AHelp;
	TAction *AHelpContents;
	TAction *AHelpAbout;
	TMenuItem *Help1;
	TMenuItem *Contents1;
	TMenuItem *N3;
	TMenuItem *Contents2;
	TAction *AHalftone;
	TAction *AHalftoneMake;
	TMenuItem *Halftone1;
	TMenuItem *Make1;
	TScrollBar *ScrollBar;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall AFileExecute(TObject *Sender);
	void __fastcall AFileOpenExecute(TObject *Sender);
	void __fastcall AFileSaveAsExecute(TObject *Sender);
	void __fastcall AFileExitExecute(TObject *Sender);
	void __fastcall AHelpExecute(TObject *Sender);
	void __fastcall AHelpContentsExecute(TObject *Sender);
	void __fastcall AHelpAboutExecute(TObject *Sender);
	void __fastcall AHalftoneExecute(TObject *Sender);
	void __fastcall AHalftoneMakeExecute(TObject *Sender);
	void __fastcall ScrollBarChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
    spl_Image *m_pImage;
    spl_Image *m_pResult;
    double m_dRatio;
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
