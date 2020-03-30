#include <bits/stdc++.h>
using namespace std;

#define Padre(u) int(u)-LSB(int(u))
#define Hijo(u) int(u)+LSB(int(u))

typedef long long ll;
struct fwTree
{
    vector<int> fwSum;
    int N;
    void initFW(int n)
    {
        fwSum.resize(n+1);
        N = n;
    }
    int LSB(int x)
    {
        return x & -x;
    }
    ll get(int i)
    {
        long long ret = 0;
        for(int x = i; x > 0; x = Padre(x)) ret+= fwSum[x];
        return ret;
    }
    ll get(int a, int b)
    {
        if(a> b) swap(a,b);
        return get(b)-get(a-1);
    }

    void update(int i, int a)
    {
        for(int x = i; x < N+1; x=Hijo(x)) fwSum[x]+= a;
    }

};

int main()
{
    int n, k;
    cin >> n >> k;
    fwTree ENs;
    ENs.initFW(100);
    for(int i = 1; i < 101; i++)
    {
        ENs.update(i, i);
    }
    int EN = ENs.get(n);
    double result = (double) EN/n;
    for(int i = 1; i < k; i++)
    {
        EN = ENs.get(floor(result)+1,n);
        result+= (((floor(result)*result)+(EN))/n)-result;
    }
    cout<<fixed<<setprecision(15)<<(result) << "\n";


}

