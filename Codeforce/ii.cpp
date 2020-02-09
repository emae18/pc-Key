#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const ll modN=1e9+7;
vector<set<int> > g(2100);
bool vis[2100];
ll hs[2100];
ll cont=0,cont2=0;
int l;
ll dfs(int node){
    vis[node]=true;
    for(auto x : g[node]){
        if(!vis[x])
            hs[node]+=dfs(x);
        else
            hs[node]+=hs[x];
            hs[node]%=modN;
    }
    return hs[node];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n>>l;
    for(int i=1;i<=l;i++){
        int k;
        cin>>k;
        hs[i] = 0;
        forin(j,k){
            int a;
            cin>>a;
            g[i].insert(a);
        }
    }
    forisn(i,l+1,n+1)hs[i]=1;
    forin(i,n+2)vis[i]=false;
    cout<<dfs(1)<<" ";
    forisn(i,l+1,n+1)if(vis[i])cont++;
    cout<<cont<<"\n";
    return 0;
}
