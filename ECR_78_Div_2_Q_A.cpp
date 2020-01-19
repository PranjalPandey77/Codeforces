
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
    ll T,i,j,fg,pL,hL;
    //cout<<"Enter T : ";
    cin>>T;
    string p,h;
    while(T--)
    {
        cin>>p;
        cin>>h;
        pL=p.length(),hL=h.length(),fg=0;
        int Hash1[26]={0},Hash2[26]={0};
        for(j=0;j<pL;j++)
        {
            Hash1[p[j]-97]++;
        }
        /*cout<<"Hash1 for password is : "<<endl;
        for(j=0;j<26;j++)
        {
            cout<<Hash1[j]<<" ";
        }
        cout<<endl;*/
        for(i=0;i<=hL-pL;i++)
        {
            //cout<<"i is : "<<i<<endl;
            for(j=0;j<26;j++)
            {
                Hash2[j]=0;
            }
            //cout<<"Hash2 initialised to 0"<<endl;
            for(j=i;j<pL+i;j++)
            {
                Hash2[h[j]-97]++;
            }
            /*cout<<"Hash2  is : "<<endl;
            for(j=0;j<26;j++)
            {
                cout<<Hash2[j]<<" ";
            }
            cout<<endl;*/
            for(j=0;j<26;j++)
            {
                if(Hash1[j]!=Hash2[j])
                {
                    break;
                }
            }
            if(j==26)
            {
                fg=1;
                break;
            }
        }

        if(fg)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
