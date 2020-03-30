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
    while(m--){
        cin>>k>>a>>b;
        for(int i=a;i<=a+k-1;i++)
            v[b-a][i]^=1;
    }
    /*for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++)cout<<v[i][j]<<" ";
        cout<<"\n";
    }*/
    while(q--){
        cin>>a>>b;
        if(a>b)swap(a,b);
        cout<<((v[b-a][a])?"SI\n":"NO\n");
    }
    return 0;
}
