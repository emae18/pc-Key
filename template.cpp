#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double p,a,b,c,d,n;
    cin>>p>>a>>b>>c>>d>>n;
    cout<<fixed<<setprecision(6);
    double m=0.00,ans;
    vector<double> o;
    for(int i=1;i<=n;i++){
        ans=p*((sin(a*i+b))+(cos(c*i+d)+2));
        m=max(ans,m);
        o.push_back(ans);
    }
    for(int i=0;i<o.size();i++)
    {

    }
    set<double> ss;
    for(int i=0;i<o.size();i++){
        ss.insert(abs(o[i]-o[i-1]));
    }

    //for(auto x: ss)cout<<x<<" ";
    cout<<"\n";
    for(auto x:o)cout<<x<<" ";
    cout<<"\n";
    cout<<*ss.rbegin()<<"\n";
    cout<<m<<"\n";
    return 0;
}
