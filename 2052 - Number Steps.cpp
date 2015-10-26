#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x==0 or y==0)
        {
            if(x==0 and y==0)
                printf("0\n");
            else
                printf("No Number\n");

            continue;
        }

        if(x==1 or y==1)
        {
            if(x==1 and y==1)
                printf("1\n");
            else
                printf("No Number\n");

            continue;
        }

        if(x==y)
        {
            if(x%2==0)
                printf("%d\n",2*x);
            else printf("%d\n",2*x-1);
        }

        else if(x==y+2)
        {
            if(x%2==0)
                printf("%d\n",2*x-2);
            else printf("%d\n",2*x-3);
        }
        else
        {
            printf("No Number\n");
        }
    }
    return 0;
}
