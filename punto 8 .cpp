#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"ingresar un numero"<<endl;
    cin>>a;
    cout<<"ingresar el segundo numero"<<endl;
    cin>>b;

    if (a<b)
    {
        cout<<"el mayor es:"<<b<<endl;
    }
    else if (a>b)
    {
        cout<<"el mayor es:"<<a<<endl;
    }
    else
    {
        cout<<"veriables de valores iguales"<<endl;
    }

}
