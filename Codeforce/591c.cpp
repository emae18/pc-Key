#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
map<int,int> m;
map<int,int> d;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        forin(i,n){
            int aux;
            cin>>aux;
            m[aux]++;

        }
    }
    return 0;
}
