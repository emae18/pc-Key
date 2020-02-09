
#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v(n);
        vector<set<int> > c(4);
        forin(i,n){
            cin>>v[i];
            forin(x,4){
                c[x].insert(v[i][x]-'0');
            }
        }
        int k=0;
        forin(i,4){
            if(c[i].size()<n){
                k+=(n-c[i].size());
                
                break;
            }
        }
        cout<<k<<"\n";
        forin(i,n)cout<<v[i]<<"\n";
    }    
    
    return 0;
}