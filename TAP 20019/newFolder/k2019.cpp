#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x :v)cout<<x<<" "
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    char c;int a,b;
    vector<pair<int,int> > javis,daniels;
    while(n--){
        cin>>c>>a>>b;
        if(c=='J')javis.push_back({a,b});
        else daniels.push_back({a,b});
    }
    sort(all(javis));
    sort(all(daniels));

    return 0;
}
