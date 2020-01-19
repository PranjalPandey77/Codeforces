/*


/*
Author : Pranjal Pandey
IT 3rd Year
MNNIT Allahabad


#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pof_front
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pll pair<long long,long long>
#define tlll tuple <long long,long long,long long>

using namespace std;

ll bfs(ll a, ll b)
{
    tlll nd=mt(a,b,1);
    queue < tlll > Q;
    Q.push(nd);
    ll clk=1,i,A,B;
    map < tlll , int > Mp;
    while(!Q.empty())
    {
        nd=Q.front();
        Q.pop();
        Mp[nd]=2;
        A=get<0>(nd);
        B=get<1>(nd);
        clk=get<2>(nd);
        if(A>B)
        {
            if(A-B>clk)
            {
                if(Mp[mt(A,B+clk,clk+1)]==0)
                {
                    Q.push(mt(A,B+clk,clk+1));
                    Mp[mt(A,B+clk,clk+1)]=1;
                }
            }
            else
            if(A-B==clk)
            {
                return clk;
            }
            else
            {
                if(Mp[mt(A+clk,B,clk+1)]==0)
                {
                    Q.push(mt(A+clk,B,clk+1));
                    Mp[mt(A+clk,B,clk+1)]=1;
                }

                if(Mp[mt(A,B+clk,clk+1)]==0)
                {
                    Q.push(mt(A,B+clk,clk+1));
                    Mp[mt(A,B+clk,clk+1)]=1;
                }
            }
        }
        else
        if(A==B)
        {
            return (clk-1);
        }
        else
        if(A<B)
        {
            if(B-A>clk)
            {
                if(Mp[mt(A+clk,B,clk+1)]==0)
                {
                    Q.push(mt(A+clk,B,clk+1));
                    Mp[mt(A+clk,B,clk+1)]=1;
                }
            }
            else
            if(B-A==clk)
            {
                return clk;
            }
            else
            {
                if(Mp[mt(A+clk,B,clk+1)]==0)
                {
                    Q.push(mt(A+clk,B,clk+1));
                    Mp[mt(A+clk,B,clk+1)]=1;
                }

                if(Mp[mt(A,B+clk,clk+1)]==0)
                {
                    Q.push(mt(A,B+clk,clk+1));
                    Mp[mt(A,B+clk,clk+1)]=1;
                }
            }
        }
    }
}

int main()
{
    ll T,a,b,clk;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        clk=1;
        ll ans=bfs(a,b);
        cout<<ans<<endl;
    }
    return 0;
}


*/
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
#define pll pair<long long,long long>
#define tlll tuple <long long,long long,long long>
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

ll bfs(ll a, ll b)
{
    tlll nd=mt(a,b,1);
    queue < tlll > Q;
    Q.push(nd);
    ll clk=1,i,A<B;
    map < tlll , bool > Mp;
    while(!Q.empty())
    {
        nd=Q.front();
        Q.pop();
        Mp[nd]=true;
        A=get<0>(nd);
        B=get<1>(nd);
        clk=get<2>(nd);
        if(A>B)
        {
            if(A-B>clk)
            {
                if(Mp[mt(A,B+clk,clk+1)]==false)
                {
                    Q.push(mt(A,B+clk,clk+1));
                }
            }
            else
            if(A-B==clk)
            {
                return clk;
            }
            else
            {
                if(Mp[mt(A+clk,B,clk+1)]==false)
                {
                    Q.push(mt(A+clk,B,clk+1));
                }

                if(Mp[mt(A,B+clk,clk+1)]==false)
                {
                    Q.push(mt(A,B+clk,clk+1));
                }
            }
        }
        else
        if(A==B)
        {
            return (clk-1);
        }
        else
        if(A<B)
        {
            if(B-A>clk)
            {
                if(Mp[mt(A+clk,B,clk+1)]==false)
                {
                    Q.push(mt(A+clk,B,clk+1));
                }
            }
            else
            if(B-A==clk)
            {
                return clk;
            }
            else
            {
                if(Mp[mt(A+clk,B,clk+1)]==false)
                {
                    Q.push(mt(A+clk,B,clk+1));
                }

                if(Mp[mt(A,B+clk,clk+1)]==false)
                {
                    Q.push(mt(A,B+clk,clk+1));
                }
            }
        }
    }
}

int main()
{
    ll T,a,b,clk;
    cout<<"Enter TreeBFS : ";
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        clk=1;
        ll ans=bfs(a,b);
        /*while(a!=b)
        {
            cout<<"a: "<<a<<" b: "<<b<<" clk: "<<clk<<endl;
            if(a>b)
            {
                if(a-b>=clk)
                {
                    b+=clk++;
                    ans++;
                }
                else
                {
                    a+=clk++;
                    ans++;
                }
            }
            else
            if(a<b)
            {
                if(b-a>=clk)
                {
                    a+=clk++;
                    ans++;
                }
                else
                {
                    b+=clk++;
                    ans++;
                }
            }
        }*/
        cout<<ans<<endl;
    }
    return 0;
}
