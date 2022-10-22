// wxWidgets "Hello World" Program

// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#include "Main.h"
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame
{
public:
    MyFrame();
    

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    //typer
    wxTextCtrl* Typer;
    wxButton* buttonAdd;
    wxButton* buttonMinus;
    wxButton* buttonMultiply;
    wxButton* buttonDivide;
    wxButton* buttonModulo;
    wxButton* buttonEquals;
    wxButton* buttonParenthesis;
    wxButton* buttonNegative;
    wxButton* buttonDecimal;
    wxButton* buttonClear;
    wxButton* buttonMod;
    wxButton* buttonSin;
    wxButton* buttonCos;
    wxButton* buttonTan;

public:
    wxTextCtrl* GetTyper();
};

enum
{
    ID_Hello = 1
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MyFrame* frame = new MyFrame();
    frame->Show(true);
    return true;
}


MyFrame::MyFrame()
    : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 250), wxSize(500, 600))
{
    //place to type in calculator 
    //Typer = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300,30));
    wxBoxSizer* calculatorTyper = new wxBoxSizer(wxVERTICAL);
    calculatorTyper->Add(new wxTextCtrl(this, wxID_ANY, "", wxPoint(-1, -1), wxSize(-1, 75), wxTE_RIGHT | wxTE_READONLY | wxTE_NO_VSCROLL), 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
    wxFont numbersAddedFont = wxFont(25, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);
    //Typer->SetFont(numbersAddedFont);
    //Typer->SetMaxLength(18);
    
    this->SetSizer(calculatorTyper);

    buttonAdd = new wxButton(this, wxID_ANY, "+", wxPoint(410, 315), wxSize(75, 75));
    buttonMinus = new wxButton(this, wxID_ANY, "-", wxPoint(410, 235), wxSize(75, 75));
    buttonMultiply = new wxButton(this, wxID_ANY, "*", wxPoint(410, 155), wxSize(75, 75));
    buttonDivide = new wxButton(this, wxID_ANY, "/", wxPoint(330, 155), wxSize(75, 75));
    buttonModulo = new wxButton(this, wxID_ANY, "%", wxPoint(250, 155), wxSize(75, 75));
    buttonEquals = new wxButton(this, wxID_ANY, "=", wxPoint(410, 395), wxSize(75, 155));
    buttonParenthesis = new wxButton(this, wxID_ANY, "( )", wxPoint(170, 155), wxSize(75, 75));
    buttonNegative = new wxButton(this, wxID_ANY, "( - )", wxPoint(170, 475), wxSize(75, 75));
    buttonDecimal = new wxButton(this, wxID_ANY, " . ", wxPoint(330, 475), wxSize(75, 75));
    buttonClear = new wxButton(this, wxID_ANY, " C ", wxPoint(10, 155), wxSize(150, 75));
    buttonMod = new wxButton(this, wxID_ANY, " Mod ", wxPoint(10, 475), wxSize(150, 75));
    buttonSin = new wxButton(this, wxID_ANY, " Sin ", wxPoint(10, 395), wxSize(150, 75));
    buttonCos = new wxButton(this, wxID_ANY, " Cos ", wxPoint(10, 235), wxSize(150, 75));
    buttonTan = new wxButton(this, wxID_ANY, " Tan ", wxPoint(10, 315), wxSize(150, 75));



    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Calculator\tCtrl-H",
        "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Calculator by Juan De La Fuente");

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}

void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("Calculator by Juan De La Fuente for Software Engineering Class",
        "About Calculator", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Calculator by Juan De La Fuente");
}

//wxTextCtrl* MyFrame::GetTyper()
//{
//    return Typer;
//}