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
map<int,int> m;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nc;
    cin>>nc;
    int n,k;
    while(nc--)
    {
        cin>>n>>k;
        m.clear();
        forisn(i,1,n+1)m[i]=1;
        int i=k;int j=k;
        while(m.size()!=1)
        {
            i++;
            if(j==k)
            {
                m.erase(i);
                j=0;
            }
            if(m.find(i)!=m.end())j++;
            if(i>m.rbegin()->first)
            {
                i%=m.rbegin()->first;
                i--;
            }
        }
        cout<<i<<"\n";
    }
    return 0;
}
