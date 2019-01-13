#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,pos;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(8);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(6);
    nums.push_back(1);
    nums.push_back(2);
    N=4;
    while(N){
        cin>>pos;
        if(pos==1)cout<<"4";
        if(pos==2)cout<<"6";
        if(pos>2 && pos<11)cout<<nums[pos-3];
        if(pos>10){
            pos=(pos-2)%8;
            if(pos==0){
                cout<<nums[7];
            }
            else{
                cout<<nums[pos-1];
            }
        }
        N--;
    }
    return 0;
}
