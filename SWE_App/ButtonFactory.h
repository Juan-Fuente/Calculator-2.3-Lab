#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();
	void CheckEventId(int id);
	wxButton* CreateButton(wxWindow* parent, int idNum, const char* label, wxPoint point);
	
	wxButton* oneButton(wxWindow* parent);
	wxButton* twoButton(wxWindow* parent);
	wxButton* threeButton(wxWindow* parent);
	wxButton* fourButton(wxWindow* parent);
	wxButton* fiveButton(wxWindow* parent);
	wxButton* sixButton(wxWindow* parent);
	wxButton* sevenButton(wxWindow* parent);
	wxButton* eightButton(wxWindow* parent);
	wxButton* nineButton(wxWindow* parent);
	wxButton* zeroButton(wxWindow* parent);

	wxButton* plusButton(wxWindow* parent);
	wxButton* minusButton(wxWindow* parent);
	wxButton* multiplyButton(wxWindow* parent);
	wxButton* divisionButton(wxWindow* parent);
	wxButton* equalButton(wxWindow* parent);
	wxButton* parenthesisButton(wxWindow* parent);
	wxButton* negativeButton(wxWindow* parent);
	wxButton* decimalButton(wxWindow* parent);
	wxButton* clearButton(wxWindow* parent);
	wxButton* modButton(wxWindow* parent);
	wxButton* sinButton(wxWindow* parent);
	wxButton* cosButton(wxWindow* parent);
	wxButton* tanButton(wxWindow* parent);
};

