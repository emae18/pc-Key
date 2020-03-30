#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()
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
        ll a,b,c,r;
        cin>>a>>b>>c>>r;
        if((a==b && b==c)||(c+r>=max(a,b) && c-r<=min(a,b))){
            cout<<0<<endl;
            continue;
        }
        ll ans=0;
        ll aa=min(a,b),bb=max(a,b);
        ans=abs(bb-aa);
        ll lr=c-r ,rr=c+r;
        if(c+r<=bb && c-r>=aa){
            ans-=(r+r);
            cout<<ans<<endl;
            continue;
        }
        if(c+r>bb && c-r<aa){
            cout<<0<<endl;
            continue;
        }
        if(c<=aa && c+r<bb && c+r>aa){
            ans-=(c+r-aa);
        }else if(c>=bb && c-r>aa && c-r<bb){
            ans-=(bb-(c-r));
        }else if(c+r>=bb &&  c<bb && c>aa && c-r>aa ){
            ans-=(bb-c);
            ans-=r;
        }else if(c-r<=aa && c>aa && c<bb && c+r<bb){
            ans-=(c-aa);
            ans-=r;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}