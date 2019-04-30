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
bool isPal(string a)
{
    forin(i,a.size())
        if(a[i]!=a[a.size()-1-i])return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    ifstream cin("casi-primo.in");
    ofstream cout("casi-primo.out");
    cin>>a>>b>>c;int cont=0,con=0;
    int i=a;
    if(i%2==0)i++;
    while(i<=b){
        forisn(j,3,c+1)
        {
          //  cout<<i<<" "<<j<<"\n";
            if(i%j==0){cont=1;break;}
        }
        if(cont==0)con++;
        cont=0;
        i+=2;
    }
    cout<<con<<"\n";
    return 0;
}
