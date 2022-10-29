#pragma once
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

