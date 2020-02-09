#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define forisn(i,s,n) for(int i=s;i<(int)n;i++)
#define mostrar(x,v) for(auto x:v)cout<<x<<" "
using namespace std;
typedef long long ll;
typedef vector<int> vi;
struct soil{
    int posX;
    int poxY;
    int value;
    bool used;
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m, k, j;
    string row;
    vector<string> table;
    map<string, pair<int,bool>> sls; //Suelo
    map<string, pair<int,bool>>:: iterator it;
    vector<pair<int,int>> sheeps, wolfs;
    cin>>t>>n>>m;
    k = n;
    j = 0;
    while(k--){
        cin>>row;
        for(int i = 0; i < row.length(); i++){
            if(row[i] == 'W') {wolfs.push_back({j, i});sls[to_string(j) + to_string(i)]={0,true};}
            else if(row[i] == 'S') {sheeps.push_back({j, i});sls[to_string(j) + to_string(i)]={0,true};}
            else sls[to_string(j) + to_string(i)]={0,false};;
        }
        j++;
        table.push_back(row);
    }
    cout<<endl;
    while(t--){
            //Actualizar suelo
        for(it = sls.begin(); it != sls.end(); it++){
            if(!it->second.second)it->second.first++;
            if(it->second.first > 2) table[it->first[0]-'0'][it->first[1]-'0'] = '#';
        }//actualizar lobos
        for(int i = 0; i < wolfs.size(); i++){
            table[wolfs[i].first][wolfs[i].second] = '.';
            sls[to_string(wolfs[i].first)+to_string(wolfs[i].second)].second = false;
            wolfs[i].second++;
            wolfs[i].second%=m;
            sls[to_string(wolfs[i].first)+to_string(wolfs[i].second)].second = true;
            table[wolfs[i].first][wolfs[i].second] = 'W';
        }//actualizar ovejas
        for(int i = 0; i < sheeps.size(); i++){
            table[sheeps[i].first][sheeps[i].second] = '.';
            sls[to_string(sheeps[i].first)+to_string(sheeps[i].second)].second = false;
            sheeps[i].first++;
            sheeps[i].first%=n;
            if (table[sheeps[i].first][sheeps[i].second] == 'W'){
                sheeps.erase(sheeps.begin()+i);
                i--;
            }
            else if (table[sheeps[i].first][sheeps[i].second] == '#'){
                sls[to_string(sheeps[i].first)+to_string(sheeps[i].second)].first = 0;
                sls[to_string(sheeps[i].first)+to_string(sheeps[i].second)].second = true;
                table[sheeps[i].first][sheeps[i].second] = 'S';
            }
            else{
                sls[to_string(sheeps[i].first)+to_string(sheeps[i].second)].second = true;
                table[sheeps[i].first][sheeps[i].second] = 'S';
            }
        }
    //mostrar turnos
        for(string x: table) cout << x <<"\n";
        cout << "\n";
    }
    return 0;
}
