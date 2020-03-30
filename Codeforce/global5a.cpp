#include<bits/stdc++.h>
#define  forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
    int n;
    cin>>n;
    vi v(n);
    vector<pair<int,int> > ans(n);
    int sum=0;
    forin(i,n){
        cin>>v[i];
        ans[i]={v[i],v[i]/2};
        sum+=ans[i].second;
    }
    if(sum==0){
        forin(i,n){
            cout<<ans[i].second<<"\n";
        }
        return 0;
    }
    forin(i,n){
        if(sum==0)break;
        if(ans[i].first%2!=0){
            if(ans[i].second<0)ans[i].second--,sum--;
            else ans[i].second++,sum++;
        }
    }

    forin(i,n)cout<<ans[i].second<<"\n";
    return 0;
}
