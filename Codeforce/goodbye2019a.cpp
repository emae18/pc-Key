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
            int n,k1,k2;
            cin>>n>>k1>>k2;
            vi v1(k1),v2(k2);
            forin(i,k1)cin>>v1[i];
            forin(i,k2)cin>>v2[i];
            sort(all(v1));
            sort(all(v2));
            if(*v1.rbegin()>*v2.rbegin()){
                cout<<"YES\n";
            }else cout<<"NO\n";
        }
        return 0;
    }