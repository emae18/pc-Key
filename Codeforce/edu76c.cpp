#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
int v[200010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        fill(v,v+200010,0);
        int n;
        cin>>n;
        forin(i,n){
            int a;
            cin>>a;
            v[a]++;
        }
        int mm= max_element(v,v+200010);

    }
    return 0;
}
