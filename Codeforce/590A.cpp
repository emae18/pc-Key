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
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vi v(n);int sum=0;
        set<int> s;
        forin(i,n){
            cin>>v[i];
            sum+=v[i];
            s.insert(v[i]);
        }
        sort(v.begin(),v.end());
        int i=n-1;
        if(s.size()==1){
            cout<<*s.begin()<<"\n";
        }else{
            for(auto x : s){
                if(x*n>=sum){
                    while(x*n>=sum){
                        x--;
                    }
                    cout<<++x<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}
