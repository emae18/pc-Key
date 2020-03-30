#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const int modN=1e9+7;
vector<int > g[2100];
bool vis[2100];
int hs[2100];
int cont=0,cont2=0;
int l;
void dfs2(int node){
    vis[node] = true;
    for(auto x: g[node]){
        if(x <= l)
            if(vis[x]) cont2+=hs[x], cont2%=modN;
            else dfs2(x);
        else
        {
            vis[x]=true;
            cont2++;
            cont2%=modN;
        }
    }
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
            g[i].push_back(a);
            hs[i]+= (a>l);
        }
    }
    for(int i=1;i<=l;i++)sort(g[i].begin(),g[i].end());
    memset(vis, false, sizeof(vis));
    dfs2(1);
    cout<<cont2<<" ";
    forisn(i,l+1,n+1)if(vis[i])cont++,cont%=modN;
    cout<<cont<<"\n";
    return 0;
}
