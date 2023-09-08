#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */

    #define OS_Windows 0
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */

    #define OS_Windows 1
    #include <windows.h>
    #include <stdio.h>
    #include <tchar.h>
    #define DIV 1048576
    #define WIDTH 7

#endif

#include <iostream>
#include <wx/chartype.h>
#include <wx/string.h>
#include <wx/crt.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"Russian");
    wxPuts(wxT("вы все говно"));
    //wxPuts-вывод в консоль
    //Для работы текстом не GUI мы текст оборачиваем в хелпер wxT().
    wxString str1 = wxT("ваша");
    wxString str2 = wxT("система");
    wxString str3 = wxT("заражена операционной системой ");
    wxString str4 = wxT(" ");
    str4=(OS_Windows==0)?"Linux":"Windows";
    wxString str = str1 + wxT(" ") + str2 + wxT(" ") + str3+str4;
    wxPuts(str);
    return 0;
}