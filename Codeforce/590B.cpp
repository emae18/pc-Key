#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vi v(n);
    queue<int> s;
    map<int,int> m;
    forin(i,n){
        cin>>v[i];
        if(m[v[i]]==0){s.push(v[i]);
        m[v[i]]++;}
        if(s.size()>k){
            m[s.front()]=0;
            s.pop();
        }
    }
    vi vv;
    cout<<s.size()<<"\n";
    while(!s.empty()){
        vv.push_back(s.front());
        s.pop();
    }
    for(int i=vv.size()-1;i>-1;i--)cout<<vv[i]<<" ";
    cout<<"\n";

    return 0;
}
