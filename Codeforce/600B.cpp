#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
vector<int> v(100010);
vector<int> comida(100010);
set<int> logs;
set<int> entrar;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    bool band=false;
    int pos=0;
    forin(i,n){
        cin>>v[i];
        if(v[i]<0){
            if(entrar.find(v[i]*(-1))==entrar.end()){
                band=true;
            }else{
                entrar.erase(v[i]*(-1));
            }
        }else{
            if(logs.find(v[i])!=logs.end()){
                band=true;
            }else{
                logs.insert(v[i]);
                entrar.insert(v[i]);
            }
        }

        if(entrar.size()==0 && i!=0){
            comida[pos]+=logs.size()*2;
            logs.clear();
            pos++;
        }
    }
    if(!band && logs.size()==0){
        cout<<pos<<"\n";
        for(int i=0;i<pos;i++){
            cout<<comida[i]<<" ";
        }
        cout<<"\n";
    }else cout<<-1<<"\n";
    return 0;
}
