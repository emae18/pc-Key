#include <stdio.h>
#include <algorithm>    // std::sort
#include<complex>
using namespace std;
int main()
    {
        int n,i,j,x;
        scanf("%i",&n);
        complex<double> v[n];
        int a,b;
        for( i=0;i<n;i++){
            scanf("%i",&a);
            scanf("%i",&b);
            v[i].real(a);
            v[i].imag(b);
        }
        int cont=0;
        double vl[3];double xx,pp;
        for( i=0;i<n-2;i++)
        {
            for( j=i+1;j<n-1;j++)
            {
                for( x=j+1;x<n;x++)
                {
                    vl[0]=(abs(v[i]-v[j]));
                    vl[1]=(abs(v[x]-v[i]));
                    vl[2]=(abs(v[j]-v[x]));
                    sort(vl,vl+3);
                     xx=vl[0]*vl[0]+vl[1]*vl[1], pp=vl[2]*vl[2];
                    if(abs(xx-pp)<0.000000001)cont++;
                }
            }
        }
        printf("%i\n",cont);
    return 0;
}
