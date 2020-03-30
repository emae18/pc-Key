#ifdef JUDGE
#include <fstream>
std::ifstream cin("input.txt");
std::ofstream cout("output.txt");
#else
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<a+(b*b)<<"\n";
    return 0;
}
