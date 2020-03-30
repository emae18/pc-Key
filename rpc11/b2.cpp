#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007LL;
int main(){
    int n, i;
    ll num, tmp;
    string elem;
    stack<ll> s;
    stack<ll> suma;
    stack<ll> prod;
    cin >> n;
    i = 0;
    ll ans=0;ll sum=0,produ=0;
    bool sumar=true;
    while(n--){
        cin >> elem;
        ll aux=0;
        if( elem == "("){
            sumar=!sumar;
        }
        else if(elem == ")"){
            ll ax;
            if(sumar){
                ax=0;
                while(sum--){
                    ax+=s.top();
                    ax+=mod;
                    s.pop();
                }
            }else{
                ax=1;
                while(produ--){
                    ax*=s.top();
                    ax%=mod;
                    s.pop();
                }
            }
            sumar=!sumar;
            if(sumar){
                if(ans==0)ans=1;
                ans*=ax;
            }
            else {
                ans+=ax;
            }
        }
        else{
            s.push(stoi(elem));
            if(sumar)sum++;
            else produ++;
        }
    }
    while(!s.empty()){
        ans+=s.top();
        ans%=mod;
        s.pop();
    }
    cout << ans << "\n";
}
