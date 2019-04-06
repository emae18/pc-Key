#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<n;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    long long d,d1,d2,f;
    cin>>d>>n>>d1>>m>>d2;
    long long l=0;long long cont=0;
    if(d1>=d*2){cout<<1<<"\n";return 0;}
    if(d1<d && d2<d){cout<<-1<<"\n";return 0;}
    while(n>0 || m>0)
    {
        cont++;
        if(n>0){
            d1-=d;
            d-=d1;
            n--;
            continue;
        }
        if(d2>d && m>0){
            d2-=d;
            d-=d2;
            m--;
            continue;
        }

    }
    cout<<((d>0)?-1:cont)<<"\n";
    return 0;
}
