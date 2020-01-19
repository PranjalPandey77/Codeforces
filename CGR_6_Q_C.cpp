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
        ll r,c,t;
        cout<<"Enter T : ";
        cin>>t;
        while(t--)
        {
        cout<<"Enter r and c : ";
        cin>>r>>c;
        if(r==1&&c==1)
        {
                cout<<"0"<<endl;
        }
        else
        {
                ll A[r][c],R[c],C[r],i,j;
                if(r==1)
                {
                        for(i=0;i<c;i++)
                        {
                            A[0][i]=i+2;
                        }
                }
                else
                if(c==1)
                {
                        j=2;
                        for(i=r-1;i>=0;i--)
                        {
                            A[i][0]=j;
                            j++;
                        }
                }
                else
                {
                        i=0,j=r-2;
                        ll x,fg1=0,fg2=0;
                        C[r-1]=1;
                        for(x=2;x<=r+c;x++)
                        {
                                if(fg1<2)
                                {
                                        if(i<c)
                                        {
                                                R[i++]=x;
                                                fg1++;
                                        }
                                        else
                                        if(j>=0)
                                        {
                                                C[j--]=x;
                                                fg1++;
                                        }
                                }
                                else
                                if(fg2<2)
                                {
                                        if(j>=0)
                                        {
                                                C[j--]=x;
                                                fg2++;
                                        }
                                        else
                                        if(i<c)
                                        {
                                                R[i++]=x;
                                                fg2++;
                                        }
                                }
                                else
                                {
                                        fg1=0;
                                        fg2=0;
                                        x--;
                                }
                        }
                        for(i=0;i<r;i++)
                        {
                                for(j=0;j<c;j++)
                                {
                                        A[i][j] = C[i]*R[j];
                                }
                        }
                }

                for(i=0;i<r;i++)
                {
                        for(j=0;j<c;j++)
                        {
                                cout<<A[i][j]<<" ";
                        }
                        cout<<endl;
                }
        }
        cout<<endl;
        cout<<endl;
        }
        return 0;
}
