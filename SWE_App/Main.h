#pragma once
#include "wx/wx.h"
#include "Frame.h"



class Main : public wxApp
{
public:
	Main();
	~Main();
	bool OnInit();
private:
	Frame* mainWindow = nullptr;


};

