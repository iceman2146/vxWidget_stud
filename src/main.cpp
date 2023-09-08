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

    wxPrintf( wxT(" Tokyo: %s\n"), now.Format(wxT("%a %H:%M:%S"), wxDateTime::GMT9).c_str() );
    wxPrintf( wxT(" Moscow: %s\n"), now.Format(wxT("%a %H:%M:%S"), wxDateTime::MSK) .c_str() );
    wxPrintf( wxT(" Budapest: %s\n"), now.Format(wxT("%a %H:%M:%S"), wxDateTime::CEST).c_str() );
    wxPrintf( wxT(" London: %s\n"), now.Format(wxT("%a %H:%M:%S"), wxDateTime::WEST).c_str() );
    wxPrintf( wxT(" NewYork: %s\n"), now.Format(wxT("%a %H:%M:%S"), wxDateTime::EDT).c_str() );
}