#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    string s,c;
    bool change=true;
    while(getline(cin,s)){
        stringstream ss;
        ss<<s;
        bool entro=false;
        while(ss>>c){
            string aux="";
            for(int i=0;i<c.size();i++){
                if(c[i]==(char)34){
                    if(change){
                        aux.push_back((char)96);
                        aux.push_back((char)96);
                    }else{
                        aux.push_back((char)39);
                        aux.push_back((char)39);
                    }
                    change=!change;
                }else aux+=c[i];
            }
            if(entro)cout<<" "<<aux;
            else cout<<aux;
            entro=true;
        }
        cout<<"\n";
    }
    return 0;
}

