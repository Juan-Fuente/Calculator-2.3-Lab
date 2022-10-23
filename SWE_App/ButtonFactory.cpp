#include "ButtonFactory.h"
#include "Frame.h"
#include "Main.h"

ButtonFactory::ButtonFactory()
{

}

ButtonFactory::~ButtonFactory()
{

}

void ButtonFactory::CheckEventId(int id)
{

}

wxButton* ButtonFactory::CreateButton(wxWindow* parent, int idNum, const char* label, wxPoint point)
{
	wxButton* temp = new wxButton(parent, idNum, label, point, wxSize(75, 75));
	return temp;
}
