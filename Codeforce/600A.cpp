#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        bool band=false;
        forin(i,n)cin>>a[i];
        forin(i,n){cin>>b[i];
            if(b[i]<a[i])band=true;
        }
        if(!band){
        int l=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){l=i;break;}
        }
        int r=0;
        for(int i=n-1;i>-1;i--){
            if(a[i]!=b[i]){r=i;break;}
        }
        set<int> v;
            for(int i=l;i<=r;i++){
                if(a[i]>b[i]){
                    v.insert(22);
                    v.insert(22);
                    break;
                }
                v.insert(abs(a[i]-b[i]));
            }
            if(v.size()==1)cout<<"YES\n";
            else cout<<"NO\n";
        }else cout<<"NO\n";
    }
    return 0;
}
