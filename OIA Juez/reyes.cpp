#include<bits/stdc++.h>;
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,1);
    int aux; char au;
    int c=40;int i=1;int m=0;
    while(c--)
    {
        cin>>aux>>au;
        if(i>n)i=i%n;
        if(aux==12)
        {
            n--;
            v[i]=0;
            m++;
        }
        i++;
        //if(m==n/2)break;
    }
    for(int k=0;k<n/2;k++)
    {
            int in= distance(v.begin(),find(v.begin(),v.end(),0));
            cout<<in+1<<" ";
            v[in]=1;
    }

    return 0;
}
