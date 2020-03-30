#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;

vector<vector<int> > g(200010);
deque<int> colita(200010);
bool vis[200010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    fill(vis,vis+200010,false);
    forin(i,n-1){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    forin(i,n)cin>>colita[i];
    queue<int> bfs;
    bfs.push(1);
    int i=0;
    while(!bfs.empty()){
        int act=bfs.front();
        if(colita[i++]!=act)break;
        vis[act]=true;
        bfs.pop();
        for(auto x : g[act]){
            if(!vis[x])
            bfs.push(x);
        }
    }
    if(i==n)cout<<"Yes\n"<<endl;
    else cout<<"No\n";
    return 0;
}
