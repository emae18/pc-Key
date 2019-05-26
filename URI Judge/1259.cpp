#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    set <int> even;
    set<int> odd;
    cin>> n;
    while(n--){
        cin>>num;
        if(num%2==0) even.insert(num);
        else odd.insert(num);
    }
    for(    set<int>::iterator it = even.begin(); it != even.end();++it){
        cout << *it<< "\n";
    }
    for(    set<int>::reverse_iterator it = odd.rbegin(); it != odd.rend();++it){
        cout << *it <<"\n";
    }
    return 0;
}
