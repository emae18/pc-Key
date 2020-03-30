#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    while(cin>>k){
        if(k==0)break;
        int n,m;
        cin>>n>>m;
        forin(i,k){
            int a,b;
            cin>>a>>b;
            if(a==n || b==m)cout<<"divisa\n";
            else if(a>n && b>m)cout<<"NE\n";
            else if(a<n && b>m)cout<<"NO\n";
            else if(a<n && b<m)cout<<"SO\n";
            else if(a>n && b<m)cout<<"SE\n";

        }
    }
    return 0;
}
