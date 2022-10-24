#include "Frame.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <iostream>
#include "wx/wx.h"

Frame::Frame() : wxFrame (nullptr, wxID_ANY, "Calculator by Juan De La Fuente", wxPoint(750,150), wxSize(510,610))
{

	this->SetSize(screenWidth, screenHeight);
	this->SetBackgroundColour(*wxGREEN);

	ButtonFactory buttonFactory;

	button_num1 = buttonFactory.oneButton(this);
	button_num2 = buttonFactory.twoButton(this);
	button_num3 = buttonFactory.threeButton(this);
	button_num4 = buttonFactory.fourButton(this);
	button_num5 = buttonFactory.fiveButton(this);
	button_num6 = buttonFactory.sixButton(this);
	button_num7 = buttonFactory.sevenButton(this);
	button_num8 = buttonFactory.eightButton(this);
	button_num9 = buttonFactory.nineButton(this);
	button_num0 = buttonFactory.zeroButton(this);
	button_negative = buttonFactory.negativeButton(this);
	button_equals = buttonFactory.equalButton(this);
	button_add = buttonFactory.plusButton(this);
	button_sub = buttonFactory.minusButton(this);
	button_mult = buttonFactory.multiplyButton(this);
	button_div = buttonFactory.divisionButton(this);
	button_mod = buttonFactory.modButton(this);
	button_sin = buttonFactory.sinButton(this);
	button_cos = buttonFactory.cosButton(this);
	button_tan = buttonFactory.tanButton(this);
	button_clear = buttonFactory.clearButton(this);
	textbox_value = new wxTextCtrl(this, 23, "0", wxPoint(10, 10), wxSize(475, 125), (long)wxTE_RIGHT);
	Bind(wxEVT_BUTTON, &Frame::OnButtonClicked, this);

}

Frame::~Frame(){}


;