#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v[9];
    int vis[9];
    for(int i=0;i<9;i++)cin>>v[i];
    sort(v,v+9,greater<int>());
    vector<int> ans;int sum=0;
    int i=0;
    while(sum<100 || ans.size()<7){
        if(sum>100){
                sum-=*ans.rbegin();
                ans.pop_back();
         }else{
            if(i>8 || vis[i]){
                for(int j=0;j<9;j++){
                    if(!vis[j]){
                        i=j;
                        break;
                    }
                }
            }
            sum+=v[i];
            vis[i]=1;
            ans.push_back(v[i++]);

         }
    }
    for(auto x: ans)cout<<x<<"\n";
	// Write your code here
}
