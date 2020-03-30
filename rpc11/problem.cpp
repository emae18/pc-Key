#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int k=str.size()-2;
    cout<<str[0];
    forin(i,k*2)cout<<"e";
    cout<<str[str.size()-1]<<"\n";

    return 0;
}

