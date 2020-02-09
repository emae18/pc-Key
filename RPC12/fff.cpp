#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxN = 1e6+10;
int n, k;
int ax[maxN];
ll distancia(ll init)
{
    ll ret = 0;
    for(int i = 0; i < n; i++)
    {
        ret+= abs(ax[i]-init);
        init+= k;
    }
    return ret;

}
int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i ++) cin >> ax[i];
    sort(ax, ax+n);
    ll a = -(1e12+7);
    ll b = (1e12+7);
    ll dab, dbb, ma, mb;

    ll r = 1e18;
    for(int i = 0; i < 100; i++)
    {
        ma = a+(b-a)/3;
        mb = b-(b-a)/3;
        dab = distancia(ma);
        dbb = distancia(mb);
        if(dab < dbb)
        {
            b = mb;
            r = min(r, dab);
        }
        else
        {
            a = ma;
            r = min(r, dbb);

        }
    }
    cout << r << "\n";
}
