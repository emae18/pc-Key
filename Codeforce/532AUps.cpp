#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,n;
    cin>>n>>k;
    int sum=0;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int ans=0;
    vector<int> aux;
    for(int i=1;i<=k;i++){
        aux=v;
        for(int j=i;j<=n;j+=k){
            aux[j]=0;
        }
        int c1=count(aux.begin(),aux.end(),1);
        int c2=count(aux.begin(),aux.end(),-1);
        ans=(max(ans,abs(c1-c2)));
    }
    cout<<ans<<"\n";
    return 0;
}
