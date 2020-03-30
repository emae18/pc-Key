#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
int main() {
    int n,m;
    cin>>n>>m;
    //while(b>k*bc)bc++;
    int cont=0;
    forin(i,n){
        vector<int> v(2*m);
        forin(i,m){
            cin>>v[i]>>v[i+1];
            if(v[i]==1 || v[i+1]==1)
                cont++;

        }
    }
    cout<<cont<<"\n";
}
