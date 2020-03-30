#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>q;
    while(q--){
            cin>>n;
    if(n==2)cout<<2<<"\n";
    else if(n%2==0)cout<<0<<"\n";
    else cout<<1<<"\n";
    }
    return 0;
}
