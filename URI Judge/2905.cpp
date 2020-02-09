#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define all(v) v.begin(),v.end()

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<pair<int,int> > v(t);
    forin(i,t)
        cin>>v[i].first>>v[i].second;
    double ans1=0;
    int cont=0,via=0,time=0;
    vector<double> ans2(121);
    for(int x=0;x<v.size();x++){
        if(via++<6 && time<120){
            time+=v[x].first;
            if(via==1){
                ans1+=v[x].second;
            }else if(via==2){
                ans1+=v[x].second/2.0;
            }else if(via>2){
                ans1+=v[x].second*0.25;
            }
        }else{
            via=time=0;
            x--;
        }
    }
    via=0,time=0;
    double ans4=0;
    vector<pair<int,int> > va=v;
    for(int x=1;x<va.size();x++){
            if(via++<6 && time<120){
                time+=va[x].first;
                if(via==1){
                    ans4+=va[x].second;
                }else if(via==2){
                    ans4+=va[x].second/2.0;
                }else if(via>2){
                    ans4+=va[x].second*0.25;
                }
            }else{
                via=time=0;
                x--;
            }
        }
    ans4+=va[0].second;
    for(int i=1;i<=120;i++){
        vector<pair<int,int> > va=v;
        va[0].first=v[0].first+i;
        if(v[0].first>=120)break;
        for(int x=0;x<va.size();x++){
            if(via++<6 && time<120){
                time+=va[x].first;
                if(via==1){
                    ans2[i]+=va[x].second;
                }else if(via==2){
                    ans2[i]+=va[x].second/2.0;
                }else if(via>2){
                    ans2[i]+=va[x].second*0.25;
                }
            }else{
                via=time=0;
                x--;
            }
        }
    }
    double ans3=10000.00;
    for(int i=1;i<=120;i++){
        //cout<<"para "<<i<<" es "<<ans2[i]<<"\n";
        ans3=((ans2[i]!=0)?min(ans3,ans2[i]):ans3);
    }
    /*double f=min(ans1,ans4);
    if(f-floor(f)>0.5){
        f=ceil(f);
    }else if(f-floor(f)<0.5)f=floor(f);
    cout<<fixed<<setprecision(2)<<f<<"\n";*/
    cout<<min(ans1,ans3);
    return 0;
}
