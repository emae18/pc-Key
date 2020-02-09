#include<bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef map<char, int> mci;
int main(){
    srand(time(NULL));                                                         
    string s;
    mci c;
    cin>>s;
    int n = s.size();
    forn(i, n) c[s[i]]++;
    if(c.size() == 1 || (c.size() == 2 && (c.begin()->second > n / 2 || n - c.begin()->second > n / 2))){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    mci::reverse_iterator ot = c.rbegin();
    if(ot->second > n / 2){
        mci::iterator et = c.begin();
        forn(i, ceil(double(et->second) / 2)) cout<<et->first;
        et++;
        forn(i, floor(double(ot->second) / 2)) cout<<ot->first;
        ot++;
        for(et; et != c.end(); et++){
            forn(i, ceil(double(et->second) / 2)) cout<<et->first;
        }
        for(ot; ot != c.rend(); ot++){
            forn(i, floor(double(ot->second) / 2)) cout<<ot->first;
        }
    } else{
        for(mci::iterator it = c.begin(); it != c.end(); it++){
            forn(i, ceil(double(it->second) / 2)) cout<<it->first;
        }
        for(mci::reverse_iterator it = c.rbegin(); it != c.rend(); it++){
            forn(i, floor(double(it->second) / 2)) cout<<it->first;
        }
    }
    cout<<endl;
    return 0;
}