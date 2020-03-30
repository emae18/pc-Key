#include <bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
char v[2010][2010];

int verDer(int i,int k){
    int cont=0;
    while(v[i][++k]=='*')cont++;
    return cont;
}
int verIzq(int i,int k){
    int cont=0;
    while(v[i][--k]=='*')cont++;
    return cont;
}
int verUp(int i,int k){
    int cont=0;
    while(v[--i][k]=='*')cont++;
    return cont;
}
int verDown(int i,int k){
    int cont=0;
    while(v[++i][k]=='*')cont++;
    return cont;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    forin(i,n){
        forin(j,m){
            cin>>v[i][j];
        }
    }
    int cont=0;
    vector<pair<int,int> > p;
    forin(i,n){
        forin(j,m){
            if(v[i][j]=='*' && v[i-1][j]=='*' && v[i][j-1]=='*'
               && v[i+1][j]=='*' && v[i][j+1] && v[i-1][j-1]!='*'
               && v[i+1][j+1]!='*' && v[i-1][j+1]!='*'
               && v[i+1][j-1]!='*')
            {
                p.push_back({i,j});
            }
        }
    }
    while(!p.empty()){
        pair<int,int> act=p.back();
        p.pop_back();
        int contIzq=verIzq(act.first,act.second),
        contDer=verDer(act.first,act.second),
        contUp=verUp(act.first,act.second),
        contDown=verDown(act.first,act.second);
       // cout<<contDer<<" "<<contIzq<<" "<<contUp<<" "<<contDown<<"\n";
        if(contDown>contIzq && contIzq==contDer && contUp==contIzq)cont++;
    }
    cout<<cont<<"\n";
    return 0;
}

