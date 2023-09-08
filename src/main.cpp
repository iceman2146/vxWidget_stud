#include <iostream>
#include <wx/string.h>
#include <wx/crt.h>
#include <wx/datetime.h>

int main(int argc, char *argv[])
{
    wxDateTime now = wxDateTime::Now();
    wxString date1 = now.Format(wxT("%B %d %Y"));
    wxPuts(date1);
    wxDateSpan span(2023, 1,15);
    wxDateTime then = now.Subtract(span);
    wxString date2 = then.Format(wxT("%B %d %Y"));
    wxPuts(date2);
    
}