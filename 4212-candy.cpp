/*
    Author: Akid (CSE'11,CUET)

    problem-id  : uvalive-4212(candy)
    problem-link: https://icpcarchive.ecs.baylor.edu/external/42/4212.html
    problem-type: dp,implementation
*/

#include<bits/stdc++.h>
using namespace std;

int dp[100010];
int A[100010];
int B[100010];

int rec(int pos,int *A)
{
    if(pos<0)   return 0;

    int &ret=dp[pos];

    if(ret!=-1) return ret;

    ret=max(rec(pos-2,A)+A[pos], rec(pos-1,A));

    return ret;

}

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m) and (n>0 and m>0))
    {
        for(int i=0; i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[j]=-1;
                scanf("%d",&A[j]);
            }
            B[i]=rec(m-1,A);
        }

        //for(int i=0;i<n;i++)    cout<<B[i]<<endl;

        for(int i=0;i<n;i++)    dp[i]=-1;

        cout<<rec(n-1,B)<<endl;
    }
    return 0;
}
