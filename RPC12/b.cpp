#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" "
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string aux;
    ll ans=0LL;
    while(getline(cin,aux)){
        int num;
        string numAux="";
        int cont=0;
        forin(i,aux.size()){
            if(aux[i]=='|')cont++;
            else if(aux[i]!='-' && aux[i]!=',' ) numAux+=aux[i];
        }
        if(numAux=="")ans+=(42*cont);
        else ans+=(stoll(numAux)*cont);
    }
    if(ans%10==0)
    {
        cout<<ans<<",-\n";
        return 0;
    }
    ll k=ans%10;
    ll res=10-k;
    ans+=res;
    cout<<ans<<",-"<<"\n";
    return 0;
}
