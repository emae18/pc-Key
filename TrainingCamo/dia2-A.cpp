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
    int n,k;
    cin>>n>>k;
    vi v(n);
    forin(i,n)cin>>v[i];
    vi z(all(v));
    sort(all(v));
    if(abs(v[0]/k-v[n-1]/k)>1){
                cout<<"NO\n";
                return 0;
    }
    cout<<"YES\n";
    forin(i,n)
    {
        forin(j,z[i])
        {
            cout<<j%k+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
