#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
vector<vector<int> > g(1010);
bool visitado[1010];
bool aux=false;
void dfs(int node,int k){
    visitado[node]=true;
    if(node==k) aux=true;
    for(int x : g[node]){
        if(!visitado[x]){
            dfs(x,k);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    forin(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    int q;
    cin>>q;
    while(q--){
        int a,k;
        cin>>a>>k;
        //memset(visitado,false,sizeof(visitado));
        fill(visitado,visitado+1010,false);
        dfs(a,k);
        bool a1=aux;
        aux=false;
        fill(visitado,visitado+1010,false);
        dfs(k,a);
        if(a1 && aux)cout<<"SI\n";
        else cout<<"NO\n";
    }
    return 0;
}
