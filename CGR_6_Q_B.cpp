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
    ll t,n,i;
    cout<<"Enter T : ";
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<15)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            i=n;
            i=i-15;
            if(i%14==0)
            {
                i=0;
                cout<<"YES"<<endl;
            }
            else
            {
                i=-1;
                //cout<<"NO"<<endl;
            }


            if(i==-1)
            {
                i=n;
                i=i-16;
                if(i%14==0)
                {
                    i=0;
                    cout<<"YES"<<endl;
                }
                else
                {
                    i=-1;
                    //cout<<"NO"<<endl;
                }
            }

            if(i==-1)
            {
                i=n;
                i=i-17;
                if(i%14==0)
                {
                    i=0;
                    cout<<"YES"<<endl;
                }
                else
                {
                    i=-1;
                    //cout<<"NO"<<endl;
                }
            }

            if(i==-1)
            {
                i=n;
                i=i-18;
                if(i%14==0)
                {
                    i=0;
                    cout<<"YES"<<endl;
                }
                else
                {
                    i=-1;
                    //cout<<"NO"<<endl;
                }
            }

            if(i==-1)
            {
                i=n;
                i=i-19;
                if(i%14==0)
                {
                    i=0;
                    cout<<"YES"<<endl;
                }
                else
                {
                    i=-1;
                    //cout<<"NO"<<endl;
                }
            }

            if(i==-1)
            {
                i=n;
                i=i-20;
                if(i%14==0)
                {
                    i=0;
                    cout<<"YES"<<endl;
                }
                else
                {
                    i=-1;
                    //cout<<"NO"<<endl;
                }
            }
            if(i==-1)
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
