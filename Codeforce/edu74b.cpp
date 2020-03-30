#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef function<bool(pair<string,int> ,pair<string,int>  )> Comparator;
Comparator comp=[](pair<string,int> e1,pair<string,int> e2){return e1.second<e2.second;};

int main(){
    int t;
    cin>>t;
    int a,r;
    map<int,int> m;
    while(t--){
        cin>>a>>r;
        for(int i=0;i<a;i++){
            int aux;
            cin>>aux;
            m[aux]++;
        }
        int cont=0;
        int ra=0;
        deque<int> dq;
        for(auto x: m) dq.push_front(x.first);
        for(int i=0;i<dq.size();i++){
            if(dq[i]>ra){
                ra+=r;
                cont++;
            }
        }
        cout<<cont<<"\n";
        m.clear();
    }
    return 0;
}
