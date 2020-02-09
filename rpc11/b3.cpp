#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const ll mod=1e9+7;
int main(){
    int n;
    cin>>n;
    string elem="";
    vector <vector<ll>> fsum;
    vector<ll> s;int cont=0LL;
    ll sum=0LL,produ=1LL,ans=0LL;
    while(n--){
        cin>>elem;
        if(elem=="("){
            cont++;
            if(cont%2 == 0) s.push_back(0); else s.push_back(1);
        }else if(elem==")"){
            cont--;
            if (!cont) {fsum.push_back(s);s.clear();}
        }else{
            if(!cont){
                ans+=stol(elem);
                ans %= mod;
            }
            else{
                if(cont % 2 == 0) s[cont-1] += stol(elem);
                else s[cont-1] *= stol(elem);
            }
        }
    }
    for(int i = 0; i < fsum.size(); i++){
            if(fsum[i].size() % 2 == 0) sum = 0; else sum = 1;
        for(int j =fsum[i].size()-1; j > -1; j --){
            if((j+1)% 2 == 0) sum += fsum[i][j];
            else sum *= fsum[i][j];
            sum %=mod;
        }
        ans += sum;
        ans %= mod;
    }
    cout<<ans<<"\n";
}
