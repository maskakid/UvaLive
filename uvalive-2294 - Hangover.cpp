#include<bits/stdc++.h>
#define eps 1e-8
using namespace std;

double A[305];

int main()
{
    A[0]=0.0;
    for( int i=1; (A[i-1]-5.22)<eps ; i++ )
    {
        A[i]=A[i-1]+ 1/(double)(i+1) ;
    }

    double x;
    while(scanf("%lf",&x))
    {
        if(x<eps) break;

        int low=0;
        int high=300;
        int mid=0;

        while(high-low>1)
        {
            mid=(low+high)/2;

            if((A[mid]-x)<eps)    low=mid;
            else    high=mid;

        }
        cout<<high<<" "<<"card(s)"<<endl;
    }
    return 0;
}
