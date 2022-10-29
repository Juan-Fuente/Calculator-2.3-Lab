#include "Frame.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <iostream>

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Baby's First Calculator", wxPoint(750, 150), wxSize(510, 610))
{

	this->SetSize(screenWidth, screenHeight);
	this->SetBackgroundColour(*wxWHITE);

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
	textbox_value = new wxTextCtrl(this, 30, "0", wxPoint(20, 125), wxSize(200, 150), (long)wxTE_RIGHT);
	Bind(wxEVT_BUTTON, &Frame::OnButtonClicked, this);
}
Frame::~Frame() {}

void Frame::OnButtonClicked(wxCommandEvent& evt)
{
	textbox_value->Clear();
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	int id = evt.GetId();
	if (calculated && id < 10)
	{
		processor->Clear();
		calculated = false;

	}

	if (processor->CheckForNull()) {
		textbox_value->Clear();
		processor->SetStringValue("");

	}

	if (id < 10)
	{

		processor->numberToString(std::to_string(id));
		(*textbox_value) << processor->StringValue();
	}

	else if (id == 10)
	{
		processor->CheckForNull();
		processor->operatorCheck();
		processor->SetStringValue(processor->MakeNegative());
		(*textbox_value) << processor->StringValue();
	}

	else if (id >= 11 && id <= 17)
	{
		calculated = false;
		float floatCompare;
		processor->CheckForNull();

		switch (id)
		{
		default:
			break;
		case 11:
			processor->operatorCheck();
			floatCompare = processor->convertString(processor->StringValue());
			if (floatCompare == (int)floatCompare) {
				processor->SetStringValue(std::to_string((int)floatCompare));
			}
			else
			{
				processor->SetStringValue(std::to_string(floatCompare));
			}
			calculated = true;
			break;
		case 12:
			processor->charToString('+');
			break;
		case 13:
			processor->charToString('-');
			break;
		case 14:
			processor->charToString('*');
			break;
		case 15:
			processor->charToString('/');
			break;
		case 16:
			processor->charToString('%');
			break;
		case 17:
			if (processor->CheckForNull()) {
				processor->SetStringValue("");
			}
			if (openParenth)
			{
				processor->charToString('(');
				openParenth = false;
			}
			else
			{
				processor->charToString(')');
				openParenth = true;
			}
			break;
		}
		(*textbox_value) << processor->StringValue();
	}

	else if (id >= 18 && id <= 21)
	{
		processor->CheckForNull();
		processor->operatorCheck();
		textbox_value->Clear();
		switch (id)
		{
		default:
			break;

		case 19:
			(*textbox_value) << processor->GetSin();
			break;
		case 20:
			(*textbox_value) << processor->GetCos();
			break;

		case 21:
			(*textbox_value) << processor->GetTan();
			break;
		}
	}

	else if (id == 22)
	{
		processor->Clear();
		(*textbox_value) << processor->StringValue();
	}

}

