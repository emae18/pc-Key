#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int) n;i++)
#define forisn(i,s,n) for(int i=s;i<(int) n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll res=s%n;
        ll cant=s/n;
        if(b>=1 && (s==1 || s<=b)){cout<<"YES\n";continue;}
        if((a>=cant && s%n==0)){cout<<"YES\n"; continue;}
        if(a>=cant && s%n!=0){
            res=s-cant*n;
        }
        if(a<cant){
            res=s-a*n;
        }

        if(res<=b){cout<<"YES\n";continue;}
        cout<<"NO\n";
    }

    return 0;
}
