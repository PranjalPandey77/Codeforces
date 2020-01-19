
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
    //Boost
    ll N,K,i,j,k,l,ans=0,cnt;
    //cout<<"";
    cout<<"Enter NaK : ";
    cin>>N>>K;
    string s;
    vector < string > V;
    for(i=1;i<=N;i++)
    {
        cin>>s;
        V.pb(s);
    }
    sort(V.begin(),V.end());
    cout<<"Sorted is :"<<endl;
    for(i=0;i<N;i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<"\nAnswer is : ";
    ll s1=-1,s2=-1,s3=-1;
    for(i=0;i<N;i++)
    {
        if(V[i][0]=='S'&&s2==-1)
        {
            s2=i;
            if(i>0)
            {
                s1=0;
            }
        }
        else
        if(V[i][0]=='T')
        {
            s3=i;
            break;
        }
    }

    if(s1!=-1&&s2!=-1&&s3!=-1)
    {
        for(i=s1;i<s2;i++)
        {
            for(j=s2;j<s3;j++)
            {
                /*for(l=0;l<K;l++)
                {
                    if(V[i][l]==V[j][l])
                    {
                        break;
                    }
                }*/
                for(k=s3;k<N;k++)
                {
                    if(i!=j&&j!=k&&k!=i)
                    {
                        cnt=0;
                        for(l=0;l<K;l++)
                        {
                            if(V[i][l]==V[j][l]&&V[i][l]==V[k][l])
                            {
                                cnt++;
                            }
                            else
                            if((V[i][l]!=V[j][l])&&(V[i][l]!=V[k][l])&&(V[k][l]!=V[j][l]))
                            {
                                cnt++;
                            }
                            else
                            {
                                break;
                            }
                        }
                        if(cnt==K)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }



    /*for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            /*for(l=0;l<K;l++)
            {
                if(V[i][l]==V[j][l])
                {
                    break;
                }
            }*/
            /*for(k=j+1;k<N;k++)
            {
                if(i!=j&&j!=k&&k!=i)
                {
                    cnt=0;
                    for(l=0;l<K;l++)
                    {
                        if(V[i][l]==V[j][l]&&V[i][l]==V[k][l])
                        {
                            cnt++;
                        }
                        else
                        if((V[i][l]!=V[j][l])&&(V[i][l]!=V[k][l])&&(V[k][l]!=V[j][l]))
                        {
                            cnt++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if(cnt==K)
                    {
                        ans++;
                    }
                }
            }
        }
    }*/
    cout<<ans;
    return 0;
}
