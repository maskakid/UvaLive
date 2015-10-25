/*
    AKID (CSE'11,CUET)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cas=1;
    scanf("%d",&t);

    while(t--)
    {
        string ss;
        string h1,h2;
        string m1,m2;
        string s1,s2;
        int cnt=0;
        string s="";
        cin>>ss;

        for(int i=0; i<ss.size(); i++)
        {
            if(ss[i]=='(')  s+='(', cnt++;
            else if(ss[i]==')')  s+=')',cnt++;
            else if(ss[i]=='*')  s+='*';
            if(cnt==4)  h1=s,s="";
            else if(cnt==12) h2=s,s="";
            else if(cnt==18) m1=s,s="";
            else if(cnt==26) m2=s,s="";
            else if(cnt==32) s1=s,s="";
            else if(cnt==40) s2=s,s="";

        }

        int hh1=0,c=1;
        for(int i=0; i<h1.size(); i++)
        {
            if(h1[i]=='*')    hh1+=pow(2,c);
            else if(h1[i]==')')   c--;
        }
        c=3;
        int hh2=0;
        for(int i=0; i<h2.size(); i++)
        {
            if(h2[i]=='*')    hh2+=pow(2,c);
            else if(h2[i]==')')    c--;
        }

        int mm1=0;
        c=2;
        for(int i=0; i<m1.size(); i++)
        {
            if(m1[i]=='*')    mm1+=pow(2,c);
            else if(m1[i]==')')   c--;
        }
        c=3;
        int mm2=0;
        for(int i=0; i<m2.size(); i++)
        {
            if(m2[i]=='*')    mm2+=pow(2,c);
            else if(m2[i]==')')    c--;
        }

        int ss1=0;
        c=2;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='*')    ss1+=pow(2,c);
            else if(s1[i]==')')   c--;
        }
        c=3;
        int ss2=0;
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]=='*')    ss2+=pow(2,c);
            else if(s2[i]==')')    c--;
        }

        printf("Case %d: %d%d:%d%d:%d%d\n",cas++,hh1,hh2,mm1,mm2,ss1,ss2);
    }
    return 0;
}
