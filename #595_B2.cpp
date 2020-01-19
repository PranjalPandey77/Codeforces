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
    int T,N,i,j,ans;
    //cout<<"Enter T : ";
    cin>>T;
    while(T--)
    {
        //cout<<"Enter N : ";
        cin>>N;
        int P[N+10],AnsSeq[N+10],A[N+10];
        vector <int> Seq;
        for(i=1;i<=N;i++)
        {
            cin>>P[i];
        }
        for(i=1;i<=N;i++)
        {
            A[i]=0;
            if(P[i]==i)
            {
                A[i]=1;
                AnsSeq[i]=1;
                //cout<<"P[i]=="<<i<<" and A[i]="<<A[i]<<" AnsSeq[i]="<<AnsSeq[i]<<endl;
            }
        }
        for(i=1;i<=N;i++)
        {
            if(A[i]==0)
            {
                A[i]=1;
                j=i;
                Seq.pb(i);
                Seq.pb(i);
                while(P[j]!=i)
                {
                    j=P[j];
                    Seq.pb(j);
                    A[j]=1;
                }
                j=i;
                ans=Seq.size()-1;
                AnsSeq[i]=ans;
                while(P[j]!=i)
                {
                    j=P[j];
                    AnsSeq[j]=ans;
                }
                Seq.clear();
            }
        }
        for(i=1;i<=N;i++)
        {
            cout<<AnsSeq[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
