#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "MainWin.h"

class Main : public wxApp
{
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(Main);//позволяет wxWidgets динамически создавать экземпляр объекта приложения в соответствующей точке инициализации wxWidgets

bool Main::OnInit()
{
    MainWin *frame = new MainWin();
    frame->Show(true);
    
    return true;
}