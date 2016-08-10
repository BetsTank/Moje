#include <iostream>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

string word;

string szyfr (string napis)
{
    srand(time(NULL));

    for(int i=0; i<napis.length(); i++)
    {
        int x=(rand()&50)-24;
        cout<<x;

        if(napis[i]>=0x61 && napis[i]<=0x7A-x) napis[i]+=x;///     ||||to samo
        else if(napis[i]>=0x61-x && napis[i]<=0x7A) napis[i]+=-26+x;///male litery
        else if(napis[i]>=0x41 && napis[i]<=0x5A-x) napis[i]+=x;///duze litery
        else if(napis[i]>=0x41-x && napis[i]<=0x5A) napis[i]+=-26+x;///duze litery
        else if(napis[i]>=0x30 && napis[i]<=0x39-x) napis[i]+=x;///liczby
        else if(napis[i]>=0x30-x && napis[i]<=0x39) napis[i]+=-10+x;///liczby



    }

    return napis;
}

int main()
{
    cout << "Podaj napis: ";
    getline(cin, word);

    cout<<szyfr(word);

    return 0;
}
