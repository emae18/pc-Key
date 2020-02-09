#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" "
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    forin(i,n){
        pair<int,int> p;
        cin>>p.first>>p.second;
        if(p.first!=0 && p.second!=0)
            v.push_back(p);
    }
    int cont=0;
    set<int> s;
    forin(i,v.size()){
        if(s.find(v[i].second/v[i].first)==s.end())
        {
            cont++;
            s.insert(v[i].second/v[i].first);
        }
    }
    cout<<cont<<"\n";
    return 0;
}
