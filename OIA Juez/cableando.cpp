#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;ll k;
    vi a(n,0);
    cin>>n;cin>>k;
    vector<long long> s;ll aux;
    forin(i,n)
    {
        cin>>aux;
        s.push_back(aux);
    }
    sort(s.begin(),s.end());
    ll men=s[0];
    ll may=s[s.size()-1];
    ll sum=0;
    if(k==men || k==may)cout<<may-men<<"\n";
    else if(men==may)
        cout<<may-k<<"\n";
    else{
        sum+=(k-men)+(may-k);
        cout<<sum<<"\n";
    }
    return 0;
}
