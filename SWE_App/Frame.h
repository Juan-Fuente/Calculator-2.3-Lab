#pragma once
#include "wx/wx.h"

class Frame : public wxFrame
{
public:
	Frame();
	~Frame();

private:

	int screenWidth = 510;
	int screenHeight = 610;

	bool clear = true;
	bool openParenth = true;
	bool calculated = false;

	wxButton* button_num1 = nullptr;
	wxButton* button_num2 = nullptr;
	wxButton* button_num3 = nullptr;
	wxButton* button_num4 = nullptr;
	wxButton* button_num5 = nullptr;
	wxButton* button_num6 = nullptr;
	wxButton* button_num7 = nullptr;
	wxButton* button_num8 = nullptr;
	wxButton* button_num9 = nullptr;
	wxButton* button_num0 = nullptr;
	wxButton* button_add = nullptr;
	wxButton* button_sub = nullptr;
	wxButton* button_mult = nullptr;
	wxButton* button_div = nullptr;
	wxButton* button_mod = nullptr;
	wxButton* button_equals = nullptr;
	wxButton* button_parenth = nullptr;
	wxButton* button_negative = nullptr;
	wxButton* button_decimalPoint = nullptr;
	wxButton* button_clear = nullptr;
	wxButton* button_tan = nullptr;
	wxButton* button_sin = nullptr;
	wxButton* button_cos = nullptr;
	wxTextCtrl* textbox_value = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);
};

