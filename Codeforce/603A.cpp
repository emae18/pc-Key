
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
        vl v(3);
        forin(i,3)cin>>v[i];
        sort(all(v));
        ll ans=0;
        ans+=v[0];
        if(v[1]==v[2]){
          if(v[0]%2!=0){
                v[1]-=(v[0]/2);
                v[2]-=(v[0]/2);
                v[2]--;
                ans+=min(v[1],v[2]); 
            }else{
                v[1]-=(v[0]/2);
                v[2]-=(v[0]/2);
                ans+=min(v[1],v[2]);
             } 
        }else{
            ll dif=v[2]-v[1];
            if(dif>=v[0]){
                v[2]-=v[0];
                ans+=min(v[2],v[1]);
            }else{
                v[0]-=dif;
                v[2]-=dif;
                if(v[0]%2!=0){
                v[1]-=(v[0]/2);
                v[2]-=(v[0]/2);
                v[2]--;
                ans+=min(v[1],v[2]); 
            }else{
                v[1]-=(v[0]/2);
                v[2]-=(v[0]/2);
                ans+=min(v[1],v[2]);
             }  
            }
        }
        cout<<ans<<"\n";
        
    }    
    
    return 0;
}