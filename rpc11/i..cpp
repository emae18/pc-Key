#include<bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	ll a[n], izq = 0, acum = 0;
	forn(i, n){
		cin>>a[i];
		acum += a[i];
	}
	ll res = 0;
	forn(i, n){
		izq += (a[i] * a[i]);
		acum -= a[i];
		res = max(res, izq * acum);
	}
	cout<<res<<endl;
}
