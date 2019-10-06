#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

vector<pair<int,int> > j;
vector<pair<int,int> > d;

bool comp(const pair<int,int> &e1,const pair<int,int> &e2){
    if(e1.first==e2.first)return e1.second>e2.second;
    return e1.first<e2.first;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        char c;
        int a,b;
        cin>>c>>a>>b;
        if(c=='J')j.push_back({a,b});
        else d.push_back({a,b});
    }
    stable_sort(j.begin(),j.end(),comp);
    stable_sort(d.begin(),d.end(),comp);
    for(int i=0;i<j.size();i++){

    }
    return 0;
}
