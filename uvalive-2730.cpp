/*
    AKID (CSE'11,CUET)
*/


/*
    This problem could be solved using Dijkstra or Bellman-Ford algorithm.
    But this algorithm has to be run backwards ie, from the end location of the journey.
    It is guaranteed that there is always a solution.
    Here i used Bellman-Ford algorithm.
*/

#include<bits/stdc++.h>
using namespace std;

int edge;
vector<int>adj[200];
int cost[200];

int cal(int u)
{
    if(u>='a' and u<='z') return 1;
    if(u>='A' and u<='Z') return (int)ceil(cost[u] * 20.0/19 )-cost[u];
}

int main()
{
    int t,cas=1;
    while(scanf("%d",&edge))
    {
        if(edge<0)  return 0;

        for(int i=65; i<123; i++)
            cost[i]=1e9,adj[i].clear();

        for(int i=0; i<edge; i++)
        {
            char ch[3],ch1[3];
            scanf("%s %s",&ch,&ch1);
            adj[(int)ch1[0]].push_back((int)ch[0]);
            adj[(int)ch[0]].push_back((int)ch1[0]);
        }

        char ch[3],ch1[3];

        scanf("%d %s %s",&edge, &ch , &ch1);

        int start=ch[0];
        int last=ch1[0];

        cost[last]=edge;

        for(int k=0; k<52; k++)
        {
            for(int i=65; i<123; i++)
            {
                for(int j=0; j<adj[i].size(); j++)
                {
                    int c=cal(i);
                    if(c+cost[i]<cost[adj[i][j]])
                    {
                        cost[adj[i][j]]=c+cost[i];
                    }
                }
            }
        }
        printf("Case %d: %d\n",cas++,cost[start]);
    }
    return 0;
}
