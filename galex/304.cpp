#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,m,prod;
    char op;
    vector<int> sec;
    while(cin>>n>>k){
        while(n--){
            cin>>m;
            sec.push_back(m);
        }
        while(k--){
            cin>>op>>n>>m;
            if(op=='C')sec[n-1]=m;
            if(op=='P'){
                prod=1;
                while(n<=m){
                    prod*=sec[n-1];
                    n++;
                }
                if(prod==0)cout<<"0";
                else (prod>0)?cout<<"+":cout<<"-";
            }
        }
        cout<<"\n";
        sec.clear();
    }
    return 0;
}

