#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
bool vis[29];
int cont=0;
int j=1;
vector<set<char> > v(100000);
vector<vector<int> > g;
void dfs(int nodo){
    vis[nodo]=true;
    char c=(nodo+'a');
    v[cont].insert(c);
    for(auto x :g[nodo]){
        if(!vis[x])dfs(x);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        memset(vis,false,sizeof(vis));
        cin>>n>>m;
        g.resize(n+1);
        forin(i,m){
            char a,b;
            cin>>a>>b;
            //cout<<a-'a'<<"\n";
            g[a-'a'].push_back(b-'a');
            g[b-'a'].push_back(a-'a');
        }
        cout<<"Case #";
        cout<<j++<<":\n";
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);
                for(auto x:v[cont])cout<<x<<",";
                v[cont].clear();
                cont++;
                cout<<"\n";
            }
        }
        cout<<cont<<" connected components\n";
        g.clear();
        cout<<"\n";
        cont=0;
    }


    return 0;
}
