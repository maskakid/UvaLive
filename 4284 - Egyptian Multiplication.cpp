/*
    AKID (CSE'11,CUET)
*/


#include<bits/stdc++.h>
#define LL long long int
using namespace std;

LL A[]= {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};

LL B[31];

int main()
{
    int t,cas=1;

    LL n,m;

    while(scanf("%lld",&n))
    {
        if(n==-1) return 0;

        scanf("%lld",&m);
        char ch[3];
        cin>>ch;

        if(n==0 or m==0)
        {
            printf("Case %d: %lld x %lld = %lld\n",cas++,n,m,0LL);
            continue;
        }

        LL x=n;
        int indx=0;

        for(int i=30; i>=0; i--)
            if(A[i]<=n)
                n=n-A[i],B[indx++]=A[i]*m;

        printf("Case %d: %lld x %lld = ",cas++,x,m);

        if(ch[0]=='u')
        {
            for(int i=indx-1; i>=0 ; i--)
            {
                printf("%lld",B[i]);
                if(i>0) cout<<" +";
                cout<<" \n"[i==0];
            }
        }
        else
        {
            for(int i=0; i<indx ; i++)
            {
                printf("%lld",B[i]);
                if(i<indx-1) cout<<" +";
                cout<<" \n"[i==indx-1];
            }
        }

    }

    return 0;
}
