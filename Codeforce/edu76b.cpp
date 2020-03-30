#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x==y){cout<<"YES\n";continue;}
        if(x!=2 && x!=3 && x!=1 || (x==2 && y==3) || x>y){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }

    return 0;
}
