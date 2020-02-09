#include<bits/stdc++.h>
#define  forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
bool salio[100010];
vector<pair<int,int> > autos(100010);
int main(){
    int n;
    cin>>n;
    forin(i,n)cin>>autos[i].first;
    int primero=autos[0].first;
    int j=0,cont=0;
    memset(salio,false,sizeof(salio));
    forin(i,n)
    {
        cin>>autos[i].second;
        if(autos[i].second==primero){
            j++;
            while(salio[autos[j].first] && j<n-1)j++;
            primero=autos[j].first;
      //      cout<<primero<<" pri\n";
        }else{
            //cout<<autos[i].second<<"salio\n";
            cont++;
            salio[autos[i].second]=true;
        }
    }
    cout<<cont<<"\n";
    return 0;
}
