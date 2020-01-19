/*
Author : Pranjal Pandey
IT 3rd Year
MNNIT Allahabad
*/
#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pii pair<int,int>
#define tiii tuple<int,int,int>
#define pll pair<long long,long long>
#define tlll tuple<long long,long long,long long>

using namespace std;

int main()
{
    ll T,N,i,j,x,tm;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<ll> V;
        for(i=0;i<N;i++)
        {
            cin>>x;
            V.pb(x);
        }
        sort(V.begin(),V.end());
        int Bol[V.size()+10]={0};
        tm=0;
        ll prev;
        for(i=0;i<N;i++)
        {
            if(Bol[i]==0)
            {
                tm++;
                Bol[i]=tm;
                prev=V[i];
                for(j=i+1;j<N;j++)
                {
                    if(Bol[j]==0&&(V[j]-prev)>1)
                    {
                        Bol[j]=tm;
                        prev=V[j];
                    }
                }
            }
        }
        cout<<tm<<endl;
    }
    return 0;
}
