#include<bits/stdc++.h>

using namespace std;
bool esPrimo(int num, int divisor);
bool esPrimo(int num, int divisor){
    if(divisor == 1)
        return true;
    else
        if(num % divisor == 0)
        return false;
        else
        return esPrimo(num, divisor-1);
}
int main()
{
    int n,p=0,c=0;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        if(esPrimo(i,c))p++;
        c++;
    }
    cout<<p<<"\n";
    return 0;
}
