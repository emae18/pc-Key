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
        
            int n;
            cin>>n;
            int v[n];
            vi aux(n);
            forisn(i,1,n+1)aux[i-1]=i;
            set<int> s(aux.begin(),aux.end());
            forin(i,n){
               cin>>v[i];
               if(s.find(v[i])!=s.end())s.erase(v[i]);
            }
            for(int i=n-1;i>-1;i--){
                if(v[i]==0){
                    if(i+1!=*s.begin()){
                    v[i]=*s.begin();
                    s.erase(s.begin());
                    }else{
                        v[i]=*s.rbegin();
                        s.erase(*s.rbegin());
                    }
                }
            }
            forin(i,n)cout<<v[i]<<" ";
            cout<<"\n";
        
        return 0;
    }