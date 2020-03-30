#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int v[n];
        if(b<a)swap(a,b);
        v[a-1]=1;
        v[b-1]=1;
        int i,j;
        for(i=b-1;i<n-1 && x>0;i++)
            x--;
        for(j=a-1;j>0 && x>0;j--)
            x--;
        cout<<abs(i-j)<<"\n";
    }

    return 0;
}
