#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        bool ok=false;
        for(int i=0;i+a.size()<=b.size();i++){
            string k=b.substr(i,a.size());
            sort(k.begin(),k.end());
            if(a==k){ok=true;break;}
        }
        cout<<(ok?"YES\n":"NO\n");
    }
}
