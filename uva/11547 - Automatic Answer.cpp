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
        n*=567;n/=9;n+=7492;n*=235;n/=47;n-=498;
        //cout<<n<<endl;
        //cout<<n%100<<endl;
        cout<<abs(n%100)/10<<endl;
    }
    return 0;
}

