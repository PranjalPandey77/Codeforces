#include<bits/stdc++.h>

#define MAXV 200000
#define pb push_back

using namespace std;

int N,Color1[MAXV],Color2[MAXV],Color3[MAXV],Color[MAXV],S;
vector<int> Gp[MAXV];

bool check()
{
        int i;
        for(i=1;i<=N;i++)
        {
                if(!((Gp[i].size())==1||(Gp[i].size())==2))
                {
                    return false;
                }
                else
                {
                        if(Gp[i].size()==1)
                        {
                                S=i;
                        }
                }
        }
        return true;
}

bool solve(int v,int p,int pp,int cost)
{
        int i;
        if(p==-1)
        {
                for(i=1;i<=3;i++)
                {
                        Color[v]=i;
                        if(i==1&&solve(Gp[v][0],v,p,cost+Color1[v]))
                        {

                        }
                        else
                        if(i==2&&solve(Gp[v][0],v,p,cost+Color1[v]))
                        {

                        }
                        else
                        {

                        }
                }
        }
        else
        if(pp==-1)
        {

        }
        else
        {
                for(i=1;i<=3;i++)
                {
                        Color[v]=i;
                }
        }
}

int main()
{
        int i,u,v;
        cin>>N;
        for(i=1;i<=N;i++)
        {
                cin>>Color1[i];
        }
        for(i=1;i<=N;i++)
        {
                cin>>Color2[i];
        }
        for(i=1;i<=N;i++)
        {
                cin>>Color3[i];
        }
        for(i=1;i<N;i++)
        {
             cin>>u>>v;
             Gp[u].pb(v);
             Gp[v].pb(u);
        }
        if(check())
        {
                solve(S,-1,-1,0);
        }
        else
        {
                cout<<"-1";
        }
        return 0;
}
