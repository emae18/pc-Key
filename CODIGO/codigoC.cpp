#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
struct punto{
    int x,y;
};
double dist(punto a,punto b)
{
   // cout<<a.x<<" "<<a.y<<"\n";
    int dy=abs(a.y-b.y);
    int dx=abs(a.x-b.x);
    //cout<<dy<<" "<<dx<<"\n";
    return sqrt(dx*dx+dy*dy);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<punto> v(n);
    forin(i,n){
        cin>>v[i].x>>v[i].y;
    }
    if(n==2)
        cout<<ceil(dist(v[0],v[1]))*k*2<<"\n";
    else cout<<"mas memoria al C:,v";
    return 0;
}
