#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
bool vis[100010];
bool vis2[100010];
vector<set<int> > ida(100010);
vector<set<int> > vuelta(100010);
vector<vector<int> > g(100010);
vector<vector<int> > gt(100010);

void dfs(int node,int act){
    vis[node]=true;
    ida[act].insert(node);
    for(auto x : g[node])
        if(!vis[x])dfs(x,act);
}
void dfs2(int node,int act){
    vis2[node]=true;
    vuelta[act].insert(node);
    for(auto x : gt[node])
        if(!vis[x])dfs(x,act);
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
        gt[b].push_back(a);
    }
    forin(i,n+1){
        dfs(i,i);
    }
    forin(i,n+1){
        dfs2(i,i);
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(ida[a].find(b)!=ida[a].end() && vuelta[b].find(a)!=vuelta[b].end()){
            cout<<"SI\n";
        }else cout<<"NO\n";
    }
    return 0;
}
