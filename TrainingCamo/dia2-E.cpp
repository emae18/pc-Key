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
#define MOD 1000000007
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
    int n;
    cin>>n;
    vi v(n);
    forin(i,n)cin>>v[i];
    ll ans=0;
    forin(z,n){
        forisn(x,z,n)
            forisn(i,x,n)
                if(v[i]%(x+1)==0)ans++;
        (++ans)%MOD;
    }
    cout<<(ans-3)<<"\n";
    return 0;
}
