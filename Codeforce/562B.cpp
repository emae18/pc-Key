#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
typedef function<bool(pair<int,int>,pair<int,int>)> Comparator;
Comparator comp=[](pair<int,int> a,pair<int,int> b)
{
    return a.second>b.second;
};
vector<pii> v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    v.resize(m);
    map<int,int> x;
    map<int,int> y;
    forin(i,m)
    {cin>>v[i].first>>v[i].second;
        x[v[i].first]++;
        y[v[i].second]++;
    }
    set<pii,Comparator> sx(x.begin(),x.end(),comp);
    set<pii,Comparator> sy(y.begin(),y.end(),comp);
    set<pii>::iterator itx=sx.begin();
    set<pii>::iterator ity=sy.begin();
    bool band=false;
    forin(i,v.size())
    {
        if((v[i].first==*itx || v[i].first==*ity) && (v[i].second==*itx || v[i].second==*ity) )
        {
            band=true;
        }
    }
    cout<<((band)?"YES\n":"NO\n");
    return 0;
}
