#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const int modN=1e9+7;
vector<int > g[2100];
bool visited[2100];
ll cont=0,cont2=0;
ll l;
void dfs2(ll node){
    visited[node]=true;
    for(auto x: g[node]){
        if(!visited[x] && x<l)
            dfs2(x);
        else visited[x]=true,cont2++,cont2%=modN;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n>>l;
    for(ll i=1;i<=l;i++){
        ll k;
        cin>>k;
        forin(j,k){
            ll a;
            cin>>a;
            g[i].push_back(a);
        }
    }
    memset(visited,false,sizeof(visited));
    dfs2(1);
    cout<<cont2<<" ";
    for(ll i=l+1;i<=n;i++){
        if(visited[i])cont++;
        cont%=modN;
    }
    cout<<cont<<"\n";
    return 0;
}
