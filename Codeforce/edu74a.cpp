#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    ll x,y;
    while(t--){
        cin>>x>>y;
        ll d=x-y;
        if(d==1){
            cout<<"NO\n";
        }else cout<<"YES\n";
    }
    return 0;
}
