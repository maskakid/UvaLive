/*
    AKID (CSE'11,CUET)
*/


/*
    1 1
    F
    Please sweep the mine again!\n
    1 2
    F F
    Please sweep the mine again!\n
*/

#include<bits/stdc++.h>
using namespace std;

int dx[]= {0,0,1,1,1,-1,-1,-1};
int dy[]= {1,-1,-1,0,1,-1,0,1};

int n,m;

char ch[25][25];

int check(int i, int j)
{
    if(i<0 or j<0 or i>=n or j>=m)  return 0;
    return 1;
}

int adjacent(int p,int q)
{
    int c=0;
    for(int i=0; i<8; i++)
    {
        int x=p+dx[i] , y=q+dy[i];
        if(check(x,y))
            if(ch[x][y]=='F')    c++;
    }

    if(c==ch[p][q]-'0') return 1;
    return 0;

}

int mine(int p, int q)
{
    int c=0;
    for(int i=0; i<8; i++)
    {
        int x=p+dx[i];
        int y=q+dy[i];
        if(check(x,y))
            if(ch[x][y]>='0' and ch[x][y]<='8')  c++;
    }
    if(!c)   return 0;
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(int i=0; i<n; i++)  scanf("%s",&ch[i]);

        bool ok=true;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(ch[i][j]!='F')
                {
                    if(adjacent(i,j)==0)   ok=false;
                }
                else if(ch[i][j]=='F')    if(mine(i,j)==0)    ok=false;
            }
        }

        ok ? printf("Well done Clark!\n") : printf("Please sweep the mine again!\n") ;
    }
    return 0;
}

