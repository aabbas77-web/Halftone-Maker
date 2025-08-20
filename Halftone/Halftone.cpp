//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Halftone.res");
USEFORM("Main.cpp", FormMain);
USEUNIT("..\SPL\spl_ImageProcessing.cpp");
USEUNIT("..\SPL\spl_Image.cpp");
USEUNIT("..\SPL\spl_ColorQuantizer.cpp");
USEFORM("HalftoneSettings.cpp", FormHalftoneSettings);
USEFORM("About.cpp", FormAbout);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TFormMain), &FormMain);
		Application->CreateForm(__classid(TFormHalftoneSettings), &FormHalftoneSettings);
		Application->CreateForm(__classid(TFormAbout), &FormAbout);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	return 0;
}
//---------------------------------------------------------------------------
