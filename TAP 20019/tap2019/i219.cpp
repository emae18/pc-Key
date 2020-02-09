#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
bool v[10010][10010];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    int k,a,b;
    //con diagonales(?)
    while(m--){
        cin>>k>>a>>b;
        for(int i=a;i<=a+k-1;i++)
            v[i][b+(b-a)]^=1;
    }
    while(q--){
        cin>>a>>b;
        if(a>b)swap(a,b);
        cout<<((v[a][b])?"SI\n":"NO\n");
    }
     return 0;
}
