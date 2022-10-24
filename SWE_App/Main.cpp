
#include "Main.h"
#include "wx/wx.h"

wxIMPLEMENT_APP(Main);


Main::Main(){}
Main::~Main() {}

bool Main::OnInit()
{
    mainWindow = new Frame();
    mainWindow->SetMaxClientSize(wxSize(700, 800));
    mainWindow->SetMinClientSize(wxSize(700, 800));
    mainWindow->Show();
    return true;
}