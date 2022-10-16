#pragma once
#include "wx/wx.h"
#include "MainTwo.h"
#include <wx/frame.h>

class Main : public wxApp
{
public:
	Main();
	~Main();

private:
	MainTwo* m_frame1 = nullptr;

public:
	virtual bool OnInit();

};

