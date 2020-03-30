#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=1;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
const int N = 1e5;  // limit for array size
vector<vector<pair<int,int> > > g;
vi dfs_num,dfs_low,pila,visited;
void tarjan(int u){
    dfs_low[u]=dfs_num[u]=dfsNumberCounter++;


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}

