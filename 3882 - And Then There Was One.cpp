/*
    similar to Josephus problem But the difference is here
    starting position is m+1.

    So first apply Josephus formula: f(n)=( f(n-1)+ k-1 )%n +1.

    Now take a look back as the starting point for this
    problem is m , so ans= ( f(n)+ m - k )%n.

    if ans<=0 , ans+=n.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;

    while(scanf("%d %d %d",&n,&k,&m))
    {
        if(!n and !m and !k)    return 0;

        int ans=1;
        for(int i=2;i<=n;i++)
            ans=(ans+k-1)%i +1;

        ans=( ans + m-k )%n;

        printf("%d\n", ans>0 ? ans : ans+=n);
    }
    return 0;
}
