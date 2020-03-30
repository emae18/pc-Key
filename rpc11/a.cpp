#include<bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < n; i++)
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	int lf[n], lc[m];
	int grilla[n][m];
	forn(i, n) cin>>lf[i];
	forn(i, m) cin>>lc[i];
	forn(i, n){
		forn(e, m){
			grilla[i][e] = min(lf[i], lc[e]);
		}
	}
	/*forn(i, n){
		forn(e, m){
			cout<<grilla[i][e]<<" ";
		}
		cout<<endl;
	}*/
	forn(i, n){
		bool posible = false;
		forn(e, m){
			if(grilla[i][e] == lf[i]){
				posible = true;
				break;
			}
		}
		if(!posible){
			cout<<"impossible"<<endl;
			return 0;
		}
	}
	forn(e, m){
		bool posible = false;
		forn(i, n){
			if(grilla[i][e] == lc[e]){
				posible = true;
				break;
			}
		}
		if(!posible){
			cout<<"impossible"<<endl;
			return 0;
		}
	}
	cout<<"possible"<<endl;
}
