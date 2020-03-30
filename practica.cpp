#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ali[n];
    int bob[n];
    for(int i=0;i<n;i++)
        cin>>ali[i];
    for(int i=0;i<n;i++)
        cin>>bob[i];
    if(n==1){
        cout<<abs(ali[0]-bob[0])<<"\n";
        return 0;
    }
    sort(ali,ali+n);
    sort(bob,bob+n);
    int pb=0,i;
    for(i=0;i<n;i++){
        if(bob[pb]>ali[i])pb=(pb+1)%n;
    }
    cout<<abs(ali[i-1]-bob[pb])<<"\n";
    return 0;
}