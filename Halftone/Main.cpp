//---------------------------------------------------------------------------
#include <vcl.h>
#include <shlobj.h>
#pragma hdrstop

#include "Main.h"
#include "spl_ImageProcessing.h"
#include "HalftoneSettings.h"
#include "About.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString GetAppDataFolder()
{
    PItemIDList AppDataFolder;
    int Index;
    char strAppDataFolder[MAX_PATH];

    SHGetSpecialFolderLocation(0, CSIDL_APPDATA, &AppDataFolder);
    SHGetPathFromIDList(AppDataFolder,strAppDataFolder);
    return AnsiString(strAppDataFolder);
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FormCreate(TObject *Sender)
{
	Left = 0;
    Top = 0;
    Width = Screen->Width;
    Height = Screen->Height - 30;

    m_pImage = new spl_Image();
    m_pResult = new spl_Image();
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FormDestroy(TObject *Sender)
{
	if(m_pImage)
    {
     	delete m_pImage;
        m_pImage = NULL;
    }
    if(m_pResult)
    {
     	delete m_pResult;
        m_pResult = NULL;
    }
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AFileExecute(TObject *Sender)
{
//	
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AFileOpenExecute(TObject *Sender)
{
	if(OpenPictureDialog->Execute())
    {
    	Caption = "Halftone Maker V1.0 ["+OpenPictureDialog->FileName+"]";
		m_pImage->LoadFromFile(OpenPictureDialog->FileName);
        m_pImage->SetPixelFormat(pf24bit);
        spl_ConvertToGray(m_pImage,gmArtificial,m_pResult);
        Image->Picture->Bitmap->Assign(m_pResult->pBitmap);
        Image->Width = Image->Picture->Bitmap->Width;
        Image->Height = Image->Picture->Bitmap->Height;
        if(Image->Height != 0)
        	m_dRatio = double(Image->Width) / double(Image->Height);
        else
        	m_dRatio = 1.0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AFileSaveAsExecute(TObject *Sender)
{
	#ifdef _Demo_
    MessageDlg(c_strDemoVersion,mtInformation,TMsgDlgButtons()<<mbOK,0);
    return;
    #else
	if(SavePictureDialog->Execute())
    {
    	if(UpperCase(SavePictureDialog->FileName).Pos(".BMP") > 0)
        {
			Graphics::TBitmap *pBitmap = new Graphics::TBitmap();
            pBitmap->Width = Image->Picture->Metafile->Width; 
            pBitmap->Height = Image->Picture->Metafile->Height;
            pBitmap->Canvas->Draw(0,0,Image->Picture->Metafile); 
	    	pBitmap->SaveToFile(SavePictureDialog->FileName);
            if(pBitmap)
            {
				delete pBitmap;
                pBitmap = NULL;
            }
        }
        else
    	if(UpperCase(SavePictureDialog->FileName).Pos(".JPG") > 0)
        {
			Graphics::TBitmap *pBitmap = new Graphics::TBitmap();
            pBitmap->Width = Image->Picture->Metafile->Width; 
            pBitmap->Height = Image->Picture->Metafile->Height;
            pBitmap->Canvas->Draw(0,0,Image->Picture->Metafile); 

			TJPEGImage *pJPEG = new TJPEGImage();
			pJPEG->Assign(pBitmap);
            pJPEG->SaveToFile(SavePictureDialog->FileName);

            if(pBitmap)
            {
				delete pBitmap;
                pBitmap = NULL;
            }
            if(pJPEG)
            {
             	delete pJPEG;
                pJPEG = NULL;
            }
        }
        else
    	if(UpperCase(SavePictureDialog->FileName).Pos(".EMF") > 0)
        {
	    	Image->Picture->SaveToFile(SavePictureDialog->FileName);
        }
        
/*
		spl_UByte ElementType;
        double dDivider;
        int nLevelsCount,nMaxGrid,nMinGrid;

        if(FormHalftoneSettings->ShowModal() != mrOk)	return;
        ElementType = FormHalftoneSettings->ComboBoxElementType->ItemIndex;
        dDivider = FormHalftoneSettings->ScrollBarThresholdDivider->Position/100.0;
        nLevelsCount = FormHalftoneSettings->ScrollBarLevelsCount->Position;
        nMaxGrid = FormHalftoneSettings->ScrollBarMaxElementSize->Position;
        nMinGrid = FormHalftoneSettings->ScrollBarMinElementSize->Position;

    	if(UpperCase(SavePictureDialog->FileName).Pos(".BMP") > 0)
        {
	        spl_Halftone(m_pResult,ElementType,dDivider,nLevelsCount,nMaxGrid,nMinGrid,m_pImage);
    		Image->Picture->Bitmap->Assign(m_pImage->pBitmap);
	    	Image->Picture->SaveToFile(SavePictureDialog->FileName);
        }
        else
    	if(UpperCase(SavePictureDialog->FileName).Pos(".JPG") > 0)
        {
	        spl_Halftone(m_pResult,ElementType,dDivider,nLevelsCount,nMaxGrid,nMinGrid,m_pImage);
    		Image->Picture->Bitmap->Assign(m_pImage->pBitmap);

			TJPEGImage *pJPEG = new TJPEGImage();
			pJPEG->Assign(Image->Picture->Bitmap);
            pJPEG->SaveToFile(SavePictureDialog->FileName);
            if(pJPEG)
            {
             	delete pJPEG;
                pJPEG = NULL;
            }
        }
        else
    	if(UpperCase(SavePictureDialog->FileName).Pos(".EMF") > 0)
        {
            HDC hDCMeta,NewMeta;
            hDCMeta=CreateEnhMetaFile(NULL,(LPSTR)SavePictureDialog->FileName.c_str(),NULL,"");

			spl_Halftone_New(hDCMeta,m_pResult,ElementType,dDivider,nLevelsCount,nMaxGrid,nMinGrid);

            NewMeta=CloseEnhMetaFile(hDCMeta);
            DeleteEnhMetaFile(NewMeta);
        }
*/        
    }
    #endif// _Demo_
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AFileExitExecute(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AHelpExecute(TObject *Sender)
{
//	
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AHelpContentsExecute(TObject *Sender)
{
//	
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AHelpAboutExecute(TObject *Sender)
{
	FormAbout->ShowModal();	
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AHalftoneExecute(TObject *Sender)
{
//	
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::AHalftoneMakeExecute(TObject *Sender)
{
    spl_UByte ElementType;
    double dDivider,dRatio;
    int nLevelsCount,nMaxGrid,nMinGrid,nMinStep,nMaxStep;

    if(FormHalftoneSettings->ShowModal() != mrOk)	return;
    Application->ProcessMessages();
    ElementType = FormHalftoneSettings->ComboBoxElementType->ItemIndex;
    dDivider = FormHalftoneSettings->ScrollBarThresholdDivider->Position/100.0;
    nLevelsCount = FormHalftoneSettings->ScrollBarLevelsCount->Position;
    nMaxGrid = FormHalftoneSettings->ScrollBarMaxElementSize->Position;
    nMinGrid = FormHalftoneSettings->ScrollBarMinElementSize->Position;
    dRatio = FormHalftoneSettings->ScrollBarScale->Position;
    nMaxStep = FormHalftoneSettings->ScrollBarMaxStepSize->Position;
    nMinStep = FormHalftoneSettings->ScrollBarMinStepSize->Position;

    HDC hDCMeta,NewMeta;
    AnsiString strFileName = IncludeTrailingBackslash(GetAppDataFolder())+"t.dcp";
    hDCMeta=CreateEnhMetaFile(NULL,strFileName.c_str(),NULL,"");

    spl_Halftone_New(hDCMeta,m_pResult,ElementType,dDivider,nLevelsCount,nMaxGrid,nMinGrid,dRatio,nMaxStep,nMinStep);

    NewMeta=CloseEnhMetaFile(hDCMeta);
    DeleteEnhMetaFile(NewMeta);

    Image->Picture->Metafile->LoadFromFile(strFileName);
    if(FileExists(strFileName))
    {
	    DeleteFile(strFileName);
    }
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ScrollBarChange(TObject *Sender)
{
	Image->Height = ScrollBar->Position;
	Image->Width = m_dRatio * Image->Height;
}
//---------------------------------------------------------------------------

