#include "Main.h"
#include "wx/wx.h"
#include "MainTwo.h"
#include <wx/frame.h>

wxIMPLEMENT_APP(Main);

Main::Main()
{
}

Main::~Main()
{
}

bool Main::OnInit()
{
	m_frame1 = new MainTwo();
	m_frame1->Show();
	return true;
}