#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c, int d, int x, int y)
{
    if(a+b+c==d+x+y) return 1;
    return 0;
}

int main()
{
    int t,cas=1;

    scanf("%d",&t);

    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("Case #%d: ",cas++);
        //option-1
        if(solve(a,b,0,c,d,0)) printf("%d + %d = %d + %d\n",a,b,c,d);
        else if(solve(a,-b,0,c,d,0)) printf("%d - %d = %d + %d\n",a,b,c,d);
        else if(solve(a,b,0,c,-d,0)) printf("%d + %d = %d - %d\n",a,b,c,d);
        else if(solve(a,-b,0,c,-d,0)) printf("%d - %d = %d - %d\n",a,b,c,d);
        //option-2
        else if(solve(a,b,c,0,d,0)) printf("%d + %d + %d = %d\n",a,b,c,d);
        else if(solve(a,b,-c,0,d,0)) printf("%d + %d - %d = %d\n",a,b,c,d);
        else if(solve(a,-b,-c,0,d,0)) printf("%d - %d - %d = %d\n",a,b,c,d);
        else if(solve(a,-b,c,0,d,0)) printf("%d - %d + %d = %d\n",a,b,c,d);
        //option-3
        else if(solve(a,0,0,b,c,d)) printf("%d = %d + %d + %d\n",a,b,c,d);
        else if(solve(a,0,0,b,c,-d)) printf("%d = %d + %d - %d\n",a,b,c,d);
        else if(solve(a,0,0,b,-c,-d)) printf("%d = %d - %d - %d\n",a,b,c,d);
        else if(solve(a,0,0,b,-c,+d)) printf("%d = %d - %d + %d\n",a,b,c,d);

        else if(a==b-c and d==a) printf("%d = %d - %d = %d\n",a,b,c,d);
        else if(a==b+c and d==a) printf("%d = %d + %d = %d\n",a,b,c,d);

        else if(a==c+d and b==a) printf("%d = %d = %d + %d\n",a,b,c,d);
        else if(a==c-d and b==a) printf("%d = %d = %d - %d\n",a,b,c,d);

        else if(c==d and c==a+b) printf("%d + %d = %d = %d\n",a,b,c,d);
        else if(c==d and c==a-b) printf("%d - %d = %d = %d\n",a,b,c,d);

        }
    return 0;
}
