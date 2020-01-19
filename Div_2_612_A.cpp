
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
    ll T,K,i,mx,fg,cnt;
    //vector < pair < int , string > > V;
    string s;
    cout<<"Enter T : ";
    cin>>T;
    while(T--)
    {
        cin>>K;
        cin>>s;
        i=0;
        mx=0;
        cnt=0;
        while(i<K)
        {
            if(s[i]=='A')
            {
                cnt=0;
                i++;
                while(s[i]!='A'&&i<K)
                {
                    cnt++;
                    i++;
                }
                mx=max(mx,cnt);
            }
            else
            {
                i++;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
