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
        ll a,b;
        cin>>a>>b;
        if(a>b)cout<<">\n";
        if(a==b)cout<<"=\n";
        if(a<b)cout<<"<\n";
    }
    return 0;
}
