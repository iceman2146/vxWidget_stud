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

    return 0;
}