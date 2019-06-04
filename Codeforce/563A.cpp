#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
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
    int n;
    cin>>n;
    vi v(n);
    vi v2(n);ll sum1=0,sum2=0;
    forin(i,n){cin>>v[i];sum1+=v[i];}
    forin(i,n){cin>>v2[i];sum2+=v2[i];}
    bool band=false;
    int i=0;int j=0;
    while(sum1==sum2 && i<n)
    {
        if(v[i]!=v2[j]){
            sum1-=v[i];
            sum2-=v2[j];
            swap(v[i],v2[j]);
            sum1+=v[i];
            sum2+=v2[j];
        }
        i++;
    }
    if(sum1!=sum2)
    {
        mostrar(x,v);mostrar(x,v2);cout<<"\n";
    }else cout<<-1<<"\n";
    return 0;
}
