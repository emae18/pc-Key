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
    int m,q;
    cin>>n>>m>>q;
    int k,a,b;
    while(m--){
        cin>>k>>a>>b;
        v[a][b]^=1;
        v[a+k][b+k]^=1;
    }
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=n+1;j++){
            cout<<((v[i][j])?1:0)<<" ";
        }
        cout<<"\n";
    }
    while(q--){
        cin>>a>>b;
        bool ans=0,ans2=0;
       // cout<<a<<b<<"\n";
        int i=a%(n+1);
        int j=b%(n+1);
        while(i<=n+1){
                ans^=v[i][i];i++;
        }
        while(j<=n+1){
                ans2^=v[j][j];j++;
        }
        cout<<((ans^ans2)?"NO\n":"SI\n");
    }
    return 0;
}
