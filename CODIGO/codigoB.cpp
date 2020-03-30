#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n;
    vector<vector<int> > v(n*3+1,vector<int>(n*3+1));
    forisn(i,1,n*3+1){
        forisn(j,1,n*3+1){
            cin>>v[i][j];

        }
    }
    return 0;
}

