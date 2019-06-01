#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,d;

    cout<<"ingresar numero"<<endl;
    cin>>a;
    c=a*100;
    d=a*-1;

    if (0<a)
    {
        cout<<"es positivo:"<<c<<endl;
    }
    else
    {
        cout<<"es negativo:"<<d<<endl;
    }
}

