/*
Author : Pranjal Pandey
IT 3rd Year
MNNIT Allahabad
*/

#include<bits/stdc++.h>

#define Mod1 1000000009
#define Mod2 1000000007
#define INF 999999999999999999
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pof_front
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pii pair<int,int>
#define tiii tuple<int,int,int>
#define pll pair<ll,ll>
#define tlll tuple<ll,ll,ll>
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);

typedef long long ll;

using namespace std;

bool bSearch(vector<int> V,int fg)
{
    int l=0,h=V.size()-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(V[m]>fg)
        {
            return true;
        }
        else
        //if(V[m]<fg)
        {
            h=m-1;
        }
        /*else
        {
            h=m-1;
        }*/
    }
    return false;
}

bool cmp(const pii &a, const pii &b)
{
    if(a.S<b.F)
    {
        return true;
    }
    return false;
}

int main()
{
    ll N,L,i,j,s,Mx,fg,cntA=0,cntD=0,cntE=0,f,ans=0;
    cout<<"Enter N : ";
    cin>>N;
    vector < int > SA[100009],E;
    vector<pii> D;
    for(i=1;i<=N;i++)
    {
        cin>>L;
        Mx=-1;
        fg=0;
        //SA[i].pb(L);
        for(j=1;j<=L;j++)
        {
            cin>>s;
            if(fg==0)
            {
                Mx=s;
                fg++;
            }
            else
            {
                if(s>Mx)
                {
                    fg=2;
                }
                else
                {
                    Mx=s;
                }
            }
            SA[i].pb(s);
        }
        f=0;
        for(j=1;j<L;j++)
        {
            if(SA[i][0]==SA[i][j])
            {
                f++;
            }
        }
        if(f==L-1)
        {
            cntE++;
            fg=0;
            E.pb(SA[i][0]);
        }
        else
        if(fg!=2)
        {
            fg=3;
        }
        if(fg==2)
        {
            cntA++;
            //SA[i].insert(SA[i].begin(),1);
        }
        else
        if(fg==3)
        {
            //SA[i].insert(SA[i].begin(),0);
            cntD++;
            D.pb(mp(SA[i][0],SA[i][SA[i].size()-1]));
        }
    }
    ans+=(2*cntA*(N-cntA));
    ans+=(cntA);





    sort(E.begin(),E.end());
    sort(D.begin(),D.end(),cmp);

    i=0;
    while(i<E.size()-1)
    {
        if(E[i]==E[i+1])
        {
            E.erase(E.begin()+i);
        }
        else
        {
            i++;
        }
    }
    fg=E.size()-1;
    if(fg<0)
    {
        fg=0;
    }
    ans+=((fg*(fg+1))/2);

















    cout<<ans<<"  ";

    // D  OD
    L=D.size();
    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
        {
            f=SA[D[i]].size();
            if(SA[D[i]][f-1]<SA[D[j]][0])
            {
                ans++;
            }
        }
    }
    cout<<ans<<"  ";
    // D  E
    fg=E.size();
    for(i=0;i<L;i++)
    {
        for(j=0;j<fg;j++)
        {
            f=SA[D[i]].size();
            if(SA[D[i]][f-1]<SA[E[j]][0])
            {
                ans++;
            }
        }
    }
    cout<<ans<<"  ";

    // E  D
    for(j=0;j<fg;j++)
    {
        for(i=0;i<L;i++)
        {
            f=SA[D[i]].size();
            if(bSearch(SA[D[i]],SA[E[j]][0]))
            {
                ans++;
            }
        }
    }
    cout<<ans<<"  ";

    // e  oe

    for(i=0;i<fg;i++)
    {
        for(j=0;j<fg;j++)
        {
            f=SA[E[i]].size();
            if(SA[E[i]][f-1]<SA[E[j]][0])
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
