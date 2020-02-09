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
            bool band=false;
            vector<pair<pair<int,int>,pair<int,int> > > res(n);
            pair<pair<int,int>,pair<int,int> > ans;
            forin(i,n){
                cin>>v[i];
                if(i && !band){
                    pair<int,int> p1=(res[i-1].first.first<v[i])?
                    res[i-1].first:make_pair(v[i],i);
                    pair<int,int> p2=
                    (res[i-1].second.first>v[i])?
                    res[i-1].second:make_pair(v[i],i);
                    res[i]={p1,p2};
                    if(res[i].second.first-res[i].first.first>=
                        (abs(res[i].first.second-res[i].second.second)+1)){
                        band=true;
                        ans=res[i];
                    }
                }else 
                    res[i]={{v[i],i},{v[i],i}};
            }
            if(band){
                cout<<"YES\n";
                if(ans.first.second>ans.second.second)
                    swap(ans.first.second,ans.second.second);
                cout<<ans.first.second+1<<" "<<ans.second.second+1<<"\n";
            }else 
                    cout<<"NO\n";
        }
        return 0;
    }
