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
        int n,p,k;
        cin>>n>>p>>k;
        vi v(n);
        forin(i,n)cin>>v[i];
        sort(all(v));
        int sum=0,ans=0;
        for(int i=0;i<n && p>0;i++){
            if(p<v[i])break;
            if(v[i]+v[i+1]>p && v[i+1]<=p && k){
                ans+=2;
                p-=v[i+1];
                k=0;
                continue;
            }
            if(v[i]<=p){ans++;p-=v[i];}
        }
        cout<<ans<<endl;
    }
    return 0;
}