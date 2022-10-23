#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();
	void CheckEventId(int id);
	wxButton* CreateButton(wxWindow* parent, int idNum, const char* label, wxPoint point);
	void ButtonArray(wxWindow* parent, wxButton** buttonArray);

	wxButton* plusButton(wxWindow* parent);
	wxButton* minusButton(wxWindow* parent);


};

