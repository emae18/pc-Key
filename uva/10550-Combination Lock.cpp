#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        if(a==0 && b==0 && c==0 && d==0)break;
        ll ans=720;
        int cont=0;
        if(a<b)a+=40;
        ans+=((abs(a-b)*9));
        ans+=360;
        if(c<b)c+=40;
        ans+=((abs(c-b)*9));
        if(c-40<b && c-40>0)c-=40;
        if(c<d)c+=40;
        ans+=((abs(c-d)*9));
        cout<<ans<<"\n";
    }
    return 0;
}

