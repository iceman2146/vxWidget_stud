#include <iostream>
#include <wx/string.h>
#include <wx/crt.h>
#include <wx/datetime.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");
    wxDateTime now = wxDateTime::Now();
    wxString date1 = now.Format();
    wxString date2 = now.Format(wxT("%X"));
    wxString date3 = now.Format(wxT("%x"));

    wxPuts(wxT("дата1: ")+date1);
    wxPuts(wxT("дата2: ")+date2);
    wxPuts(wxT("дата3: ")+date3);
}