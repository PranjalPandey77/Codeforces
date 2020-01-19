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

ll N;
vector <ll> pow3;

ll binarySearch(ll N)
{
    ll l=0,h=39,m;
    while(l<=h)
    {
        m=l+(h-l)/2;
        if(pow3[m]==N)
        {
            return m;
        }
        else
        if(pow3[m]>N)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    if(pow3[l]>N)
    {
        l--;
    }
    return l;
}

bool same()
{
    ll i;
    i=binarySearch(N);
    if(pow3[i]==N)
    {
        return true;
    }
    return false;
}

ll solve()
{
    if(same())
    {
        return N;
    }
    ll sum=0,i;
    i=binarySearch(N);
    sum=pow3[i];
    int p[40]={0};
    p[i]++;
    while(sum<N)
    {
        i=binarySearch(N-sum);
        if(p[i]==1)
        {
            while(p[i]&&i<=39)
            {
                i++;
            }
            p[i]++;
            sum+=pow3[i];
        }
        else
        {
            p[i]++;
            sum+=pow3[i];
        }
    }
    for(i=0;i<=39;i++)
    {
        if(p[i]==1)
        {
            if(sum-pow3[i]>=N)
            {
                sum-=pow3[i];
            }
        }
    }
    return sum;
}

void fillPow3()
{
    ll i;
    pow3.pb(1);
    for(i=1;i<=39;i++)
    {
        pow3.pb(pow3[i-1]*3);
    }
}

int main()
{
    ll q;
    cin>>q;
    fillPow3();
    while(q--)
    {
        cin>>N;
        cout<<solve()<<endl;
    }
    return 0;
}
