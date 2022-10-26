#include "ButtonFactory.h"
#include "Frame.h"
#include "Main.h"

ButtonFactory::ButtonFactory() {}

ButtonFactory::~ButtonFactory() {}

void ButtonFactory::CheckEventId(int id) {}

wxButton* ButtonFactory::CreateButton(wxWindow* parent, int idNum, const char* label, wxPoint point)
{
	wxButton* temp = new wxButton(parent, idNum, label, point, wxSize(75, 75));
	return temp;
}

wxButton* ButtonFactory::oneButton(wxWindow* parent)
{
	wxButton* temp = new wxButton(parent, 1, "1", wxPoint(170, 450), wxSize(75, 75));
	temp->SetBackgroundColour(*wxYELLOW);
	return temp;
}

wxButton* ButtonFactory::twoButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 2, "2", wxPoint(250, 450), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}
wxButton* ButtonFactory::threeButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 3, "3", wxPoint(330, 450), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::fourButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 4, "4", wxPoint(170, 365), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::fiveButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 5, "5", wxPoint(250, 365), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::sixButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 6, "6", wxPoint(330, 365), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::sevenButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 7, "7", wxPoint(170, 285), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::eightButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 8, "8", wxPoint(250, 285), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::nineButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 9, "9", wxPoint(330, 285), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::zeroButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 0, "0", wxPoint(250, 525), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::negativeButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 10, "-(x)", wxPoint(170, 525), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::equalButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 11, "=", wxPoint(410, 445), wxSize(75, 155));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::plusButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 12, "+", wxPoint(410, 365), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::minusButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 13, "-", wxPoint(410, 285), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::multiplyButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 14, "*", wxPoint(410, 205), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::divisionButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 15, "/", wxPoint(330, 205), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}


wxButton* ButtonFactory::modButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 16, "Mod", wxPoint(250, 205), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::parenthesisButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 17, "( )", wxPoint(170, 205), wxSize(75, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}


wxButton* ButtonFactory::sinButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 19, "Sin", wxPoint(10, 285), wxSize(150, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::cosButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 20, "Cos", wxPoint(10, 365), wxSize(150, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::tanButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 21, "Tan", wxPoint(10, 445), wxSize(150, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
}

wxButton* ButtonFactory::clearButton(wxWindow* parent)
{
	wxButton* input = new wxButton(parent, 22, "Clear", wxPoint(10, 525), wxSize(150, 75));
	input->SetBackgroundColour(*wxYELLOW);
	return input;
};
