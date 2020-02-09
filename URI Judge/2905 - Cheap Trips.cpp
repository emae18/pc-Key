#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    forin(i,n)
        cin>>v[i].first>>v[i].second;
    double ans2=0.00,ans1=0.00,ansf=0.00;
    int time=0,via=0,time2=1,via2=0;
    forin(i,n){
        if(via==0){
            ans1+=v[i].second;
            time2+=v[i].first;
            for(int z=2;z<=6 && i+z<n && time2<120;z++){
                if(viaje==2){
                ans2+=v[x].second/2.0;
                }else if(viaje>2){
                    ans3+=v[x].second*0.25;
                }
            }
        }
        if(time<120){
            viaje++;
            if(viaje>6)viaje=1;
            time+=v[x].first;
            if(viaje==1){
                ans1+=v[x].second;
            }else if(viaje==2){
                ans1+=v[x].second/2.0;
            }else if(viaje>2){
                ans1+=v[x].second*0.25;
            }
        }else{
            ansf=min(ans1,ans2);
            viaje=time=0;
            x--;
        }
    }
    if(ans-floor(ans)>0.5){
        ans=ceil(ans);
    }else if(ans-floor(ans)<0.5)ans=floor(ans);
    cout<<fixed<<setprecision(2)<<ans1<<"\n";
    return 0;
}
