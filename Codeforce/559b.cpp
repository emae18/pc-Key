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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n);set<int> s;
	forin(i,n){cin>>v[i];s.insert(v[i]);}
    int i=0,j=n-1,k=0;
    while(k<*s.rbegin())
    {
        if(k*abs(i+1-j+1)<=min(v[i],v[j]))
        {
            cout<<k<<"\n";return 0;
        }
        k++;
    }
	return 0;
}

