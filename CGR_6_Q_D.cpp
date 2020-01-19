/*
Author : Pranjal Pandey
IT 3rd Year
MNNIT Allahabad
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

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

using namespace std;

int main()
{
        ll n,m,i,u,v,d;
        cin>>n>>>m;
        //vector < pii > Debts;
        map < pii , int > Mp;
        set < tiii > S;
        for(i=1;i<=m;i++)
        {
            cin>>u>>v>>d;
            //Debts.pb(mt(u,v,d));
            Mp[mp(u,v]+=d;
            if(S.find(mp(u,v))==S.end())
            {
                S.insert(mp(u,v));
            }
        }

        return 0;
}
