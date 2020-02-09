#include<bits/stdc++.h>
using namespace std;
vector<int> ma(100010);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    int  cont=0;
    for(int i=0;i<m;i++){
        cin>>v[i];
        if(ma[v[i]]++==0)cont++;
        if(cont==n){
            for(int j=1;j<=n;j++)if(--ma[j]==0)cont--;
                cout<<1<<"";}
        else cout<<0<<"";
    }
    return 0;
}
