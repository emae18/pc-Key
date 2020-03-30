#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> likes(m);
    forin(i,m)cin>>likes[i];
    vector<pair<int,int> > post(n);
    //iota(post.begin(),post.end(),1);
    forin(i,n)post[i].first=i+1,post[i].second=0;
    forin(i,m){
        post[likes[i]-1].second++;

        forin(i,n)cout<<post[i].first<<" ";
        cout<<"\n";
    }
    return 0;
}
