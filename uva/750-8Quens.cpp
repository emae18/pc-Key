#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x :v) cout<<x<<" ";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int fila[8],tablero,a,b,conter;
bool place(int r,int c){
    forin(anterior,c){
        if(fila[anterior]==r || abs(fila[anterior]-r)==abs(anterior-c))
            return false;// çomparten misma fila o misma diagonal
    }
    return true;
}

void backtrack(int c){
    if(c==8 && fila[b]==a){
        printf("%2d",++conter);
        cout<<"      ";
        for(int j=0;j<8;j++){
            if(j!=0)cout<<" ";cout<<fila[j]+1;
        }
        cout<<"\n";
    }
    forin(r,8){
        if(place(r,c)){
            fila[c]=r;
            backtrack(c+1);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    forin(i,t){
        cin>>a>>b;
        a--;b--;
        if(i!=0)cout<<"\n";
        memset(fila,0,sizeof fila);
        conter=0;
        cout<<"SOLN       COLUMN\n";
        cout<<" #      1 2 3 4 5 6 7 8\n\n";
        backtrack(0);
    }
    return 0;
}

