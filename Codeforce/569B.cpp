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
int k(int n)
{
    if(n==1)return 1;
    return k(n-1)+4*(n-1);
}
ll mult(vector<ll> v)
{
    ll m=1;
    forin(i,v.size())
    {
        if(v[i]==0)return 0;
        m*=v[i];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll> v(n);int cont=0;
    forin(i,n){
        cin>>v[i];
        if(v[i]<0)cont++;
    }
    forin(i,n)
        if(((v[i]*-1)-1)!=0 && cont%2==0)
         {
             v[i]=(v[i]*-1)-1;cont--;
         }
        else
            v[i]=(v[i]*-1)-1;
    mostrar(x,v);
    cout<<"\n";
    return 0;
}
