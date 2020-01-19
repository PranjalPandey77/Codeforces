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
    ll N,i,j,fz,dig,digSum,ev;
    string str;
    cout<<"Enter num : ";
    cin>>N;
    vector <string> V;
    for(i=0;i<N;i++)
    {
        cin>>str;
        V.pb(str);
        fz=0;
        digSum=0;
        ev=0;
        for(j=0;j<V[i].length();j++)
        {
            dig=(V[i][j]-48);
            if(dig==0)
            {
                fz++;
            }
            if(dig%2==0)
            {
                ev++;
            }
            digSum+=dig;
        }

        if(fz==1)
        {
            if(ev>1&&digSum%3==0)
            {
                cout<<"red"<<endl;
            }
            else
            {
                cout<<"cyan"<<endl;
            }
        }
        else
        if(fz>1&&digSum%3==0)
        {
            cout<<"red"<<endl;
        }
        else
        {
            cout<<"cyan"<<endl;
        }
    }
    /*for(i=0;i<N;i++)
    {
        fz=0;
        digSum=0;
        ev=0;
        for(j=0;j<V[i].length();j++)
        {
            dig=(V[i][j]-48);
            if(dig==0)
            {
                fz++;
            }

            if(dig%2==0)
            {
                ev++;
            }
            digSum+=dig;
        }
        if(fz==1)
        {
            if(ev>0&&digSum%3==0)
            {
                cout<<"red"<<endl;
            }
            else
            {
                cout<<"cyan"<<endl;
            }
        }
        else
        if(fz>1&&digSum%3==0)
        {
            cout<<"red"<<endl;
        }
        else
        if(fz==0)
        {
            cout<<"cyan"<<endl;
        }
    }*/
    return 0;
}
