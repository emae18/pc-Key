#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef long long ll;
ll escalera(vector<int> v,int x){
    deque<ll> pasos(v.begin(),v.end());
    vector<ll> add(v.size());
    forin(i,v.size()){
        add[i]+=((i)?pasos[i]+pasos[i-1]:pasos[i]); }
    if(v.size()==1){
        ll a=x/v[0];
        if(x%v[0]!=0)a++;
        return a;
    }
    ll p=0LL;
    ll cont=0LL;
    bool neg=false;
    forin(i,v.size()){if(v[i]<0)neg=true;break;}
    if(!neg){
        vector<ll> sum(v.size());
        sum[0]=v[0];
        forisn(i,1,v.size())sum[i]=v[i]+sum[i-1];
        while(lower_bound(sum.begin(),sum.end(),x)==sum.end()){
            x-=*sum.rbegin();
            cont+=v.size();
        }
        cont+=distance(sum.begin(),lower_bound(sum.begin(),sum.end(),x));
        return ++cont;
    }
    while(p<x){
        p+=pasos.front();
        pasos.push_back(pasos.front());
        pasos.pop_front();
        cont++;
    }
    return cont;
}


#ifndef EVAL
    #include <iostream>

    int main() {
        int N, H;
        cin >> N >> H;
        vector<int> v;
        v.reserve(N);
        for (int i=0;i<N;i++) {
            int x; cin >> x;
            v.push_back(x);
        }
        cout << escalera(v, H) << endl;
    }
#endif
