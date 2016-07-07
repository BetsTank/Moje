#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double first, second_int;
string second;

int main()
{
    cout << "Wprowadz dzialanie: " << endl;
    cin >>first>>second;

    char sing=second[0];
    second[0]='0';

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
        cout<<first/second_int;
        break;

     case '^':
        for(int i=0;i<second_int-1;i++)
        {
            first=first*first;
        }
        cout<<first;
        break;



    }

    return 0;
}
//////////////////////////to do zrobic zeby potegowanie dzialalo xd
