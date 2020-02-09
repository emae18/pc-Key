#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int) n;i++)
#define forisn(i,s,n) for(int i=s;i<(int) n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--){
        ll n,k;
        cin>>n>>k;
        deque<int> ceros,uno;
        string aux="";
        forin(i,n){
            char c;cin>>c;aux+=c;
            if(c=='1')uno.push_back(i);
            else ceros.push_back(i);
        }
        if(ceros.size()==0 || uno.size()==0){
            cout<<aux<<"\n";
        }
        int i=0;
        while(k>0 && ceros.size()>0){
            if(ceros.front()<uno.front()){
                ceros.pop_front();
                continue;
            }
            int act=ceros.front();
            ceros.pop_front();
            int dist=act-uno.front();
            if(dist<k){
                swap(aux[act],aux[act-dist]);
                uno.pop_front();
                k-=dist;
           }else if(dist>=k){
                swap(aux[act],aux[act-k]);
                uno.erase(uno.begin(),uno.begin()+act-k);
                k=0;
           }
        }
        cout<<aux<<"\n";
    }

    return 0;
}
