#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        // Mainly for demonstration purposes, i.e. works but is overly simple
        // In the real world, use sth. like boost.hash_combine
        return h1 ^ h2;
    }
};
typedef pair<int,int> pii;
map<pii,bool> vis;
unordered_map<pii,vector<pii> ,pair_hash> g;
int n,m,k;

int cont=0;
/*void dfs(pii node){
    vis[node]=true;
    cout<<"estoy en"<<node.first<<"-"<<node.second<<"\n";
    cont++;
    if((vis[{node.first-1,node.second}] || node.first-1<1 )
       && (vis[{node.first+1,node.second}]  || node.first+1>n)
       && (vis[{node.first,node.second-1}] || node.second-1<1)
       && (vis[{node.first,node.second+1}] || node.second+1>m)){
            if(cont==n*m-k)cout<<"Yes\n";
            else cout<<"No\n";

       }
    if(g[node].size()==1 && vis[g[node][0]])return;
    for(int i=0;i<g[node].size();i++){
        if(!vis[g[node][i]]){
            dfs(g[node][i]);
        }
    }
}*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    if(k==0){
        cout<<"Yes\n";
        return 0;
    }
    forin(i,k){
        int a,b;
        cin>>a>>b;
        vis[{a,b}]=true;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            pii act={i,j};
            if(act.first-1>0 && !vis[{act.first-1,act.second}])g[act].push_back({act.first-1,act.second});
            if(act.first+1<n+1 && !vis[{act.first+1,act.second}])g[act].push_back({act.first+1,act.second});
            if(act.second-1>0 && !vis[{act.first,act.second-1}])g[act].push_back({act.first,act.second-1});
            if(act.second+1<m+1 && !vis[{act.first,act.second+1}])g[act].push_back({act.first,act.second+1});
        }
    }
   // dfs({1,1});
    stack<pair<int,int> > bfs;
    bfs.push({1,1});
    vis[{1,1}]=true;
    int cont=0;
    while(!bfs.empty()){
        pair<int,int> act=bfs.top();
        bfs.pop();
        cont++;
        //cout<<"estoy en"<<act.first<<"-"<<act.second<<"\n";
        if((vis[{act.first-1,act.second}] || act.first-1<1 )
       && (vis[{act.first+1,act.second}]  || act.first+1>n)
       && (vis[{act.first,act.second-1}] || act.second-1<1)
       && (vis[{act.first,act.second+1}] || act.second+1>m)){
            if(cont==n*m-k){cout<<"Yes\n";return 0;}
            else{ cout<<"No\n";return 0;}
       }
        for(int i=0;i<g[act].size();i++){
            pii t=g[act][i];
            if(!vis[t]){
                bfs.push(t);
                vis[t]=true;
            }
        }
    }
    cout<<"contador:"<<cont<<"\n";
    if(cont==(m*n)-k){
        cout<<"Yes\n";
    }else cout<<"No\n";
    return 0;
}
