/*
    AKID (CSE'11,CUET)
*/

#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL n ;
LL A[12];
LL P[12];

int length(LL n)
{
    int cnt=0;
    while(n)
        cnt++,n/=10LL;
    return cnt;
}

int main()
{
    A[0]=1LL;
    A[1]=3LL;
    for(int i=2;i<11;i++)   A[i]=A[i-1]+3LL*A[i-1];
    P[1]=10LL;
    for(int i=2;i<11;i++)   P[i]=P[i-1]*10LL;

    while(~scanf("%lld",&n))
    {
        LL ans=0;
        for(int i=length(n)-1; i>=0; i--)
        {
            if(i)
            {

                if(n/P[i]>=4LL)
                {
                    ans+=(4LL*A[i]);
                    break;
                }
                else
                {
                    ans+=(n/P[i]*A[i]);
                    n=n%P[i];
                }
            }
            else
            {

                if(n>=3LL)
                {
                    ans+=(3LL*A[i]);
                    break;
                }
                else
                {
                    ans+=(n*A[i]);
                }
            }
        }

        printf("%lld\n",ans);
    }
    return 0;
}

