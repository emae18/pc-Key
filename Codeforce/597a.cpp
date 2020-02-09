#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x:v)cout<<x<<" "
using namespace  std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(__gcd(a,b)!=1){
            cout<<"Infinite\n";
        }else cout<<"Finite\n";


        /*int contw=1;
        int contn=0;
        forisn(i,1,101){
            if(i%a==0 || i%b==0 || i%(a+b)==0)contw++;
        }
        contn=100-contw;
        cout<<contn<<" "<<contw<<"\n";
        if(contn>contw)cout<<"Infinite\n";
        else cout<<"Finite\n";
            */
    }
    return 0;
}
