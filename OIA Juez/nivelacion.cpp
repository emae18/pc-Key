#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x :v) cout<<x<<" ";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int nivelacion(string str){
    bool band=true;
    for(int i=0,j=str.size()-1;i<str.size() && j!=i;i++,j--){
        if(str[i]!=str[j]){
            band=false;
            break;
        }
    }
    if(band)return 0;


}
int main()
{
    string str;
    cin>>str;
    cout<<nivelacion(str)<<"\n";
    return 0;
}
