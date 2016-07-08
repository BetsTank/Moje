#include <iostream>
#include <string>
#include <sstream>
#include "kalk.h"

using namespace std;

void kalkulator()
{
    long double first, second_int,sum=1;
    string second;

    cout << "Wprowadz dzialanie: " << endl;
    cin >>first>>second;

    char sing=second[0];
    second[0]='0';

    if (second[1]=='-')
    {
        second[1]='0';
    }

    istringstream iss(second);
    iss>>second_int;


    switch(sing)
    {
    case '-':
        cout<<first-second_int;
        break;

    case '+':
        cout<<first+second_int;
        break;

    case '/':
        if(second_int==0)
        {
            cout<<"Nie dziel przez zero!";
        }else
        cout<<first/second_int;
        break;

     case '^':
        for(int i=0;i<second_int;i++)
        {
            sum*=first;
        }
        cout<<sum;
        break;
     case '*':
        cout<<first*second_int;
        break;

     case '%':
        cout<<(int)first/(int)second_int<<" reszty "<<(int)first%(int)second_int;
        break;
    }
}
