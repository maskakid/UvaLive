#include<bits/stdc++.h>
using namespace std;

int A[110];

int main()
{
    int n,d;
    while(scanf("%d %d",&n,&d) and (n>0 and d>0))
    {
        for(int i=0; i<d;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x;
                scanf("%d",&x);
                if(x==1)    A[j]++;
            }
        }

        bool ok=false;
        for(int i=0;i<102;i++)
        {
            if(A[i]==d)
            {
                ok=true;
                break;
            }
        }
        printf( ok? "yes\n" : "no\n" );
        memset(A,0,sizeof(A));
    }
    return 0;
}
