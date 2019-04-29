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
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> v(n,"");
    vector<string> z(m,"");
    vector<string> pal;
    forin(i,n)
    {
        cin>>v[i];
        pal.push_back(v[i]);
        reverse(v[i].begin(),v[i].end());
        pal.push_back(v[i]);
        forin(j,m)
            z[j]+=v[i][j];
    }
    forin(i,m)
    {pal.push_back(z[i]);
        reverse(z[i].begin(),z[i].end());
        pal.push_back(z[i]);
    }
    string aux;/*
    forin(i,pal.size())
    {
        cout<<pal[i]<<"\n";
    }*/
    bool band;
    forin(i,k)
    {
        cin>>aux;
        int j=0;
        band=false;
        while(j<pal.size() && !band)
        {
            forin(t,pal[j].size())
            {

            }
            j++;
        }
        if(band)cout<<"SI\n";else cout<<"NO\n";

    }
    return 0;
}
