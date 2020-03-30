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
    while(t--){
        int n;
        cin>>n;
        int v[n];
        forin(i,n)cin>>v[i];
        sort(v,v+n);
        cout<<(v[n-1]-v[0])*2<<"\n";
    }
    return 0;
}
