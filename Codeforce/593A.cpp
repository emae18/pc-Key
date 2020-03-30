#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b==0){cout<<0<<"\n";continue;}
        int ans=0;
        while(b>0 && c>1){
            ans+=3;
            c-=2;
            b--;
        }
        while(a>0 && b>1){
            ans+=3;
            b-=2;
            a--;
        }
        cout<<ans<<"\n";
    }


    return 0;
}
