#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M, Q;
    cin >> N >> M >> Q;
    int a, b, k;
    vector< pair<int, int > >  diagonales[N+10];
//    map<int, vector< pair<int, int > > > diagonales;
    for(int i = 0; i < M; i++)
    {
        cin >> k >> a >> b;
        diagonales[b-a].push_back({a,b+k-1});
    }
    for(int j = 0; j < Q; j++)
    {
        cin >> a >> b;
        int cont = 0;
        if(a > b) swap(a, b);
        vector< pair<int, int> > vec = diagonales[b-a];
        for(int i = 0; i < vec.size(); i++)
        {
            cont+= a >= vec[i].first && b <= vec[i].second  && a <= vec[i].second;
        }
        if(cont & 1 ) cout << "SI\n";
        else cout << "NO\n";
    }
    return 0;
}
