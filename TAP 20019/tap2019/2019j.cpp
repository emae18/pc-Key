#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int n,d;
string estados[10010];
vector<vector<int> > v(10010);
int cont=0;
string dfs(int i){
    cont++;
    if(cont>d)return "" ;
    string aux=estados[i];
    for(auto x : v[i])
        aux+=dfs(x);
    return aux;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>d;
    forin(i,n)cin>>estados[i+1];
    forin(i,n){
        int aux;
        cin>>aux;
        if(aux!=-1)v[aux].push_back(i+1);
    }vector<string> s;
    for(int i=1;i<n+1;i++){
        cont=0;
        s.push_back(dfs(i));
    }
    for(int x=0;x<s.size();x++){
        if(s[x].size()!=d){
        s.erase(s.begin()+x);x--;}
    }
    sort(s.begin(),s.end());
    string u=*s.rbegin();
    for(int i=0;i<u.size();i++)cout<<u[i]<<" ";
    cout<<"\n";
    return 0;
}
