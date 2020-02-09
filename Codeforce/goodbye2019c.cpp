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
            vi v(n);
            int sum=0;
            int sux=0;
            int ma=-1,mi=1e9+1;
            forin(i,n){
                cin>>v[i];
                sum+=v[i];
                ma=max(ma,v[i]);
                mi=min(mi,v[i]);
                sux^=v[i];
            }
            if(sum==2*sux){
                cout<<0<<"\n"<<"\n";
            }else{
                    
            }
        }
        return 0;
    }
