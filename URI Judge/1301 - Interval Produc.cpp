#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
vi sg;
int n,l,a,b,r,q;
vi v;
void build(int nod,int l,int r)
{
    if(l==r)
        sg[nod]=v[l];
    else{
        build(2*nod,l,(r+l)/2);
        build(2*nod+1,((l+r)/2)+1,r);
        sg[nod]=sg[2*nod]*sg[2*nod+1];
    }
}
int sum(int n ,int start,int e,int l, int r) {
     if(r < start or e < l)
    {
         return 1;
    }
    if(l <= start and e <= r)
    {
        return sg[n];
    }
   int mid = (start + e) / 2;
    int p1 = sum(2*n, start, mid, l, r);
    int p2 = sum(2*n+1, mid+1, e, l, r);
    return (p1 * p2);
}
void update(int nodo,int s,int e, int pos,int val)
{
    if(s == e)
    {
        v[pos] = val;
        sg[nodo] = val;
    }
    else
    {
        int mid = (s + e) / 2;
        if(s <= pos and pos <= mid)
        {
            update(2*nodo, s, mid, pos, val);
        }
        else
        {
            update(2*nodo+1, mid+1, e, pos, val);
        }
        sg[nodo] = sg[2*nodo] * sg[2*nodo+1];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    //while(cin>>n>>q)
    //{
        //if(n==0 && q==0)break;
        v.resize(n);
        sg.resize(4*n);
        forin(i,n)cin>>v[i];
        build(1,0,n-1);
        forin(i,q)
        {
            char aux;
            cin>>aux>>a>>b;
            if(aux=='C')
                update(1,0,n-1,a-1,b);
            else if(aux=='P')
                cout<<((sum(1,0,n-1,a-1,b-1)==0)?'0':((sum(1,0,n-1,a-1,b-1)>0)?'+':'-'));
        }
        cout<<"\n";
    //}
    return 0;
}
