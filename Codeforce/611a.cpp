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
        int h,m;
        cin>>h>>m;
        int ans=0;
        if(h==0){
            ans=23*60;
        } else{
            ans+=(abs(24-h)*60);
            ans-=60;
        }
        if(m!=0){
            ans+=(60-m);
        }else{
            ans+=60;
        }
        cout<<ans<<"\n";
    }
    return 0;
}