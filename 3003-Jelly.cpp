#include<bits/stdc++.h>
using namespace std;

vector<pair<int , string > >v;

int main()
{
    int t,cas=1;

    while(scanf("%d",&t) and t > 0)
    {
        while(t--)
        {
            int a,b,c;
            string ss;
            cin>>ss>>a>>b>>c;
            v.push_back( {a*b*c,ss});
        }

        sort(v.begin(),v.end());

        if(v[0].first==v[v.size()-1].first)
            printf("No child has lost jelly.\n");
        else
            cout<<v[0].second,printf(" has lost jelly to "),cout<<v[v.size()-1].second<<"."<<endl;

        v.clear();
    }
    return 0;
}
