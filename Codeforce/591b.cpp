#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>q;
    string s,t;
    while(q--){
        cin>>s>>t;
        if(s==t){cout<<"YES\n";continue;}
        int b=0;
        forin(i,s.size()){
            forin(j,t.size()){
                if(s[i]==b[j]){
                    b=1;
                    i=s.size();
                    break;
                }
            }
        }
        if(b!=0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
