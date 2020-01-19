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

ll llPow(ll base,ll exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    if(exponent%2==0)
    {
        return llPow((base*base)%Mod1,exponent/2);
    }
    else
    {
        return ((llPow((base*base)%Mod1,(exponent-1)/2)*base)%Mod1);
    }
}

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        cout<<"Hello"<<endl;
    }
    return 0;
}
