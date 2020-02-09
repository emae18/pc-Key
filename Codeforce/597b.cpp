#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x:v)cout<<x<<" "
using namespace  std;
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
        int v[3];
        cin>>v[0]>>v[1]>>v[2];
        string str="";
        int cont=0;
        string aux;
        cin>>aux;
        forin(i,n){
            char x=aux[i];
            if(x=='R' && v[1]>0){
                cont++;
                v[1]--;
                str+="P";
            }else if(x=='P' && v[2]>0){
                cont++;
                v[2]--;
                str+="S";
            }else if(x=='S' && v[0]>0){
                cont++;
                v[0]--;
                str+="R";
            }else{
                int contOne=0,contTwo=0;
                if(x=='R'){
                    forisn(j,i+1,n){
                        if(aux[j]=='P')
                    }
                }
                if(x=='P'){

                }
                if(x=='S'){

                }
            }
        }
        if(cont>=ceil(n/2.0))
            cout<<"YES\n"<<str<<"\n";
        else cout<<"NO\n";

    }
    return 0;
}
