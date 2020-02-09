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
            int ma=-1,mi=1e9+1;
            vi v(n);
            int l=1,r=1;
            vector<pair<pair<int,int>,pair<int,int> > > res(n);
            forin(i,n){
                cin>>v[i];
                if(i){
                    if(v[i]<mi)mi=v[i];
                    if(v[i]>ma)ma=v[i];
                    res[i]={(res[i-1].first.first<mi)?
                    res[i-1].first:make_pair(mi,i),
                    (res[i-1].second.first>ma)?
                    res[i-1].first:make_pair(ma,i)};
                }else {
                    res[i]={{v[i],i},{v[i],0}};
                    mi=v[i];
                    ma=v[i];
                }
            }
            pair<pair<int,int>,pair<int,int> > ans;
                forin(i,n){
                    if(i){
                        if(ans.second.first-ans.first.first
                        <res[i].second.first-res[i].first.first)
                        ans=res[i];
                    }else{
                        ans=res[i];
                    }
                }
                if(ans.second.first-ans.first.first>=n){
                    cout<<"YES\n";
                    cout<<ans.first.second<<" "<<ans.second.second<<"\n";
                }else cout<<"NO\n";
        }
        return 0;
    }
