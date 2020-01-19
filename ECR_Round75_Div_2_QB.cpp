/*
Author : Pranjal Pandey
IT 3rd Year
MNNIT Allahabad
*/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<functional>
#include<assert.h>

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
using namespace __gnu_pbds;

typedef tree <int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> new_data_set;

ll llPow(ll bse,ll exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    if(exponent%2==0)
    {
        return llPow((bse*bse)%Mod1,exponent/2);
    }
    else
    {
        return ((llPow((bse*bse)%Mod1,(exponent-1)/2)*bse)%Mod1);
    }
}

bool check(int oc,int zc)
{
    if((oc==0)||(zc==0)||(max(oc,zc)%min(oc,zc)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Q,N,i,oc,zc,L,j,ans;
    cout<<"Enter QWERTYUIOP : ";
    cin>>Q;
    while(Q--)
    {
        cin>>N;
        vector < tuple < string , int , int > > S;
        string num;
        for(i=1;i<=N;i++)
        {
            cin>>num;
            for(j=0;j<num.length();j++)
            {
                if(num[i]=='1')
                {
                    oc++;
                }
                else
                {
                    zc++;
                }
            }
            S.pb(mt(num,oc,zc));
        }
        ans=0;
        if(N==1)
        {
            if(check(get<1>(S[0]),get<2>(S[0])))
            {
                ans=1;
            }
            else
            {
                ans=0;
            }
        }
        else
        {
            int m,a,b,diff,mx,mn;
            for(i=0;i<N;i++)
            {
                a=get<1>(S[i]);
                b=get<2>(S[i])
                if(check(a,b))
                {
                    ans++;
                }
                else
                {
                    mx=max(a,b);
                    mn=min(a,b);
                    diff=mx-mn;
                    for(m=1;m<=diff;m++)
                    {
                        if((mx+m)%(mn-m)==0)
                        {
                            break;
                        }
                        else
                        if((mx-m)%(mn+m)==0)
                        {
                            break;
                        }
                    }
                    for(j=i+1;j<N;j++)
                    {

                    }
                }
            }
        }
    }
    return 0;
}
