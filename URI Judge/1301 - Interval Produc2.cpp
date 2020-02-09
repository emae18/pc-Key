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
ll n,l,a,b,r,q;
vector<ll> v;
void updateTreeNode(ll p, ll value,ll tree[])
{
    // set value at position p
    tree[p+n] = value;
    p = p+n;

    // move upward and update parents
    for (ll i=p; i > 1; i >>= 1)
        tree[i>>1] = tree[i] * tree[i^1];
}
ll query(ll l, ll r,ll tree[])
{
    ll res = 1;
    // loop to find the sum in the range
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res *= tree[l++];

        if (r&1)
            res *= tree[--r];
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cin>>n>>q;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)break;
        v.resize(n);
        char tree[4*n];
        forin(i,n)cin>>v[i];
        for (int i=0; i<n; i++)
        tree[n+i] = v[i];
        // build the tree by calculating parents
        for (int i = n - 1; i > 0; --i)
        tree[i] = ((tree[i<<1]>0 && tree[i<<1 | 1]>0)?'+':
                   (tree[i<<1]==0 || tree[i<<1 | 1]==0)?'0':'-');
        while(q--){
            char aux;
            cin>>aux>>a>>b;
            if(aux=='C'){
                updateTreeNode(a-1,b,tree);
            }
            else if(aux=='P'){
                int ans=query(a-1,b,tree);
                cout<<((ans==0)?'0':((ans>0)?'+':'-'));
            }
        }
        cout<<"\n";
        v.clear();
    }
    return 0;
}
