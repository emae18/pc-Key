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
    int t;
    cin>>t;
    long long n,k;
    while(t--)
    {
        long long i=0;
        cin>>n>>k;
        if(k==n){cout<<2<<"\n";continue;}
        if(k>n){cout<<n<<"\n";continue;}
        while(n>0)
        {
            if(n%k==0)
            {
                n/=k;
                i++;
            }else{

                i+=(n%k);
                n-=(n%k);
            }
            if(k==n){i+=2;break;}
            if(k>n){i+=n;break;}

        }
        cout<<i<<"\n";
    }
    return 0;
}