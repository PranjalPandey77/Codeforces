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

ll LCM(ll a, ll b)
{
    ll i=max(a,b);
    while((i%a!=0)||(i%b!=0))
    {
        i++;
    }
    return i;
}

int main()
{
    ll N,M,Q,i,Y,lcm,in,im;
    string s;
    //cout<<"Enter N M : ";
    cin>>N>>M;
    vector < string > n,m;
    for(i=1;i<=N;i++)
    {
        cin>>s;
        n.pb(s);
    }
    for(i=1;i<=M;i++)
    {
        cin>>s;
        m.pb(s);
    }
    cin>>Q;
    while(Q--)
    {
        cin>>Y;
        /*lcm=LCM(N,M);
        map <int,string> Mp;
        for(i=0;i<lcm;i++)
        {
            Mp[i]=n[i%N]+m[i%M];
        }*/
        if(Y%N==0)
        {
            in=N-1;
        }
        else
        {
            in=Y%N;
            in--;
        }

        if(Y%M==0)
        {
            im=M-1;
        }
        else
        {
            im=Y%M;
            im--;
        }
        s=n[in]+m[im];
        cout<<s<<endl;
    }
    return 0;
}
