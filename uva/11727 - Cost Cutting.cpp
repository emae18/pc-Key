#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    forin(i,t){
        int v[3];
        forin(i,3)cin>>v[i];
        sort(v,v+3);
        cout<<"Case "<<i+1<<": "<<v[1]<<endl;
    }
    return 0;
}

