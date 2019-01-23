#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x1,x2,y1,y2;
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x2==x1 && y1==y2){cout<<0<<"\n";continue;}
        if(x2==x1 || y1==y2){cout<<1<<"\n";continue;}
        if(max(x1,x2)-min(x1,x2)!=max(y1,y2)-min(y1,y2)){cout<<2<<"\n";continue;}
        cout<<1<<"\n";
    }
    return 0;
}
