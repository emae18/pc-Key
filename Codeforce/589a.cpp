#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define mostrar(x,v) for(auto x :v)cout<<x<<" "
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        stringstream ss;
        ss<<i;
        string k=ss.str();
        multiset<char> ms(k.begin(),k.end());
        bool band=true;
        for(auto x : ms){
            if(ms.count(x)>1){
                band=false;
                break;
            }
        }
        if(band){
            cout<<i<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";
    return 0;
}
