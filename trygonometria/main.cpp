#include <iostream>
#include <string>
#include <sstream>
#include "kalk.h"
#include <windows.h>

using namespace std;

int choose;

int main()
{
    cout<<"Zwykly kalkulator -1, rownania kwadratowe -2: "<<endl;
    cin>>choose;
    switch(choose)
    {
    case 1:
        kalkulator();
        break;

    case 2:
        cout<<"hello";
        break;

    default:
        cout<<"wybierz 1 lub 2";
        break;
    }
    system("pause");
    return 0;
}
