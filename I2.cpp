#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int,int>> col;
    vector<int> diff;
    int n,t,alice,bob, aux, pos;
    cin>>n;
    t=n;
    while(t--){
        cin>>alice;
        col.push_back({alice,0});
    }
    t=n;
    while(t--){
        cin>>bob;
        col[n-t-1].second = bob;
    }
    for(int i = 0; i < n ; i++) diff.push_back(abs(col[i].first-col[i].second));
    while(diff.size() > 1){
        aux = INT_MAX;
        pos = 0;
        if(diff.size() > 1){
            for(int i = 0; i<diff.size();i++){
                if(diff[i]<aux) {
                    aux = diff[i];
                    pos = i;
                }
            }
            col.erase(col.begin()+pos);
            diff.erase(diff.begin()+pos);
        }
        aux = 0;
        if(diff.size() > 1){
            for(int i = 0; i<diff.size() && diff.size() > 1;i++){
                if(diff[i]>aux) {
                    aux = diff[i];
                    pos = i;
                }
            }
            col.erase(col.begin()+pos);
            diff.erase(diff.begin()+pos);
        }
    }
    cout << diff[0] << endl;
}