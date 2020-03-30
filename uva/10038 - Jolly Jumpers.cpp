#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int v[n];
        bool ok=true;
        forin(i,n)
        {
            cin>>v[i];
            if(i){
                if(abs(v[i]-v[i-1])<1
                || abs(v[i]-v[i-1])>n-1)
                ok=false;
            }
        }
        cout<<((ok)?"Jolly":"Not jolly")<<"\n";
    }
    return 0;
}