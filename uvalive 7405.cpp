#include<bits/stdc++.h>
using namespace std;

int A[10010];

map<char,vector<int>>mp;

int main()
{
    int t,cas=1;
    scanf("%d",&t);

    while(t--)
    {
        memset(A,-1,sizeof(A));
        string s;
        cin>>s;

        int ans=INT_MAX;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]].push_back(i);
//            if(A[s[i]]!=-1)
//            {
//               // cout<<A[s[i]]<<" "<<i<<endl;
//                ans=min(ans,abs(i-A[s[i]]));
//            }
//            A[s[i]]=i;

        }

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if((it->second).size()>1)
                for(int i=1;i<(it->second).size();i++)
            {
                ans=min(ans,it->second[i]-it->second[i-1]);
            }
        }

        //for(int i=0;i<vc.size();i++)
        printf("Case #%d: %d\n",cas++,ans==INT_MAX?-1:ans);

        mp.clear();
    }
    return 0;
}
