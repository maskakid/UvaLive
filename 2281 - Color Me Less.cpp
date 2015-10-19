#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int R[16],G[16], B[16];

int main()
{
    for(int i=0; i<16; i++) scanf("%d %d %d",&R[i],&G[i],&B[i]);
    int r,g,b;
    while(scanf("%d %d %d",&r,&g,&b) and (r!=-1 and g!=-1 and b!=-1))
    {
        int D=INF;
        int ind=-1;

        for(int i=0 ;i<16; i++)
        {
            int tmp=(R[i]-r)*(R[i]-r)+(G[i]-g)*(G[i]-g)+(B[i]-b)*(B[i]-b);
            if(tmp<D) D=tmp,ind=i;
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n", r,g,b,R[ind],G[ind],B[ind]);
    }
    return 0;
}
