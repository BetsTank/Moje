#include <iostream>

using namespace std;

string napis;

int main()
{

    string napis;
    int x;///o ile przesunac tekst

    cout<<"Wprowadz tekst: ";
    getline(cin,napis);

    if(napis.length()>0xA)
    {
        return 2;
    }
    cout<<"Liczba przesuniecia: ";
    cin>>x;

    if(x<-26 || x>26)
    {
        while(x<-26 || x>26)
        {
            cout<<"Niepoprawna liczba. Podaj ponownie: ";
            cin>>x;
        }
    }


    for (int i=0; i<=napis.length(); i++)
    {
        if(napis[i]>=0x61 && napis[i]<=0x7A-x) napis[i]+=x;///     ||||to samo
        else if(napis[i]>=0x61-x && napis[i]<=0x7A) napis[i]+=-26+x;///male litery
        else if(napis[i]>=0x41 && napis[i]<=0x5A-x) napis[i]+=x;///duze litery
        else if(napis[i]>=0x41-x && napis[i]<=0x5A) napis[i]+=-26+x;///duze litery
        else if(napis[i]>=0x30 && napis[i]<=0x39-x) napis[i]+=x;///liczby
        else if(napis[i]>=0x30-x && napis[i]<=0x39) napis[i]+=-10+x;///liczby
    }

    cout<<napis;

    return 0;
}
