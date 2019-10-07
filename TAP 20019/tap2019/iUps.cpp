#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


int v[10010][10010];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    //vector<vector<int> > v(n+1,vector<int>(n+1));
    while(m--){
        int k,a,b;
        cin>>k>>a>>b;
        if(k!=1){
            v[a][b]^=1;
            v[b][a]^=1;
            v[a+k][b+k]^=1;
            v[b+k][a+k]^=1;
        }else{
            v[a][b]^=1;
            v[b][a]^=1;
        }
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        bool band=true;
        for(int i=a;i<n+2 ;i++){
            for(int z=b;z<n+2;z++){
                if(v[i][z]!=0){
                    band=!band;
                }
            }
        }
        for(int i=a;i>-1 ;i--){
            for(int z=a;z>-1;z--){
                if(v[i][z]!=0){
                    band=!band;
                }
            }
        }
        if(band)cout<<"NO\n";
    }
    return 0;
}
