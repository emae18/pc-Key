#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    vector<int> es;
    int conte=0;
    int k;
    cin>>k;
    str+=str.substr(0,k+1);
    forin(i,str.size()){
        if(str[i]=='E'){
            es.push_back(i);
        }
    }
    int ans=0;
    forisn(i,1,es.size()){
        if(abs(es[i]-es[i-1])<=k)ans++;
    }
   // cout<<ans<<" "<<conte<<"\n";
    cout<<ans*2<<"\n";
    return 0;
}
