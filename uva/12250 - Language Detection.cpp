#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string t;int i=1;
    while(cin>>t){
        if(t[0]=='#')break;
        cout<<"Case "<<i++<<": ";
        if(t=="HELLO")cout<<"ENGLISH"<<endl;
        else if(t=="HOLA")cout<<"SPANISH"<<endl;
        else if(t=="HALLO")cout<<"GERMAN" <<endl;
        else if(t=="BONJOUR")cout<<"FRENCH" <<endl;
        else if(t=="CIAO")cout<<"ITALIAN" <<endl;
        else if(t=="ZDRAVSTVUJTE")cout<<"RUSSIAN"<<endl;
        else cout<<"UNKNOWN"<<endl;
    }

    return 0;
}

