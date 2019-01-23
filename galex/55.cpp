#include <iostream>
#include <vector>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> coord;
    int N,X,Y,mov;
    cin>>N;

    while(N){
        mov=0;
        cin>>X>>Y;
        coord.push_back({X,Y});
        cin>>X>>Y;
        coord.push_back({X,Y});
        while(coord[0]!=coord[1]){
            if(coord[0].first==coord[1].first || coord[0].second == coord[1].second){
                coord[0]=coord[1];
                mov++;
            }else{
                (abs(coord[0].first - coord[1].first) == abs(coord[0].second - coord[1].second))?mov++:mov=2;
                coord[0]=coord[1];
            }
        }
        cout<<mov<<"\n";
        coord.clear();
        N--;
    }
}
