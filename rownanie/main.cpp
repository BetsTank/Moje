#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x1, x2, x0, delta,sqdelta,q,p;

    cout<<"Podaj wspolczynniki a, b i c: ";
    cin>>a>>b>>c;

    if(a==0)
    {
        cout<<"To rownianie nie jest kwadratowe! Podaj a roznoe od zera. ";
        cin>>a;
    }

    delta = b*b - 4*a*c;

    p=-b/(2*a);
    q=-delta/(4*a);

    if(delta>0)
    {
        sqdelta = sqrt(delta);
        x1 = (-b - sqdelta)/(2*a);
        x2 = (-b + sqdelta)/(2*a);
        cout<<"Sa dwa pierwiastki rownania: "<<fixed<<setprecision(2)<<x1<<" "<<x2;
    }
    else if(delta==0)
    {
        x0 = -b/(2*a);
        cout<<"Jest jeden pierwiastek: "<<fixed<<setprecision(2)<<x0;
    }
    else
        cout<<"Brak pierwiastków";


    if(a<0) cout<<endl<< "Najwieksza wartosc: "<<q;

    if(a>0)cout<<endl<< "Najmniejsza  wartosc: "<<q;


    cout<<endl<<"wsp. wierzcholka: ("<<p<<","<<q<<")";

    return 0;
}
