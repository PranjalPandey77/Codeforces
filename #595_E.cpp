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
#define pof pof_front
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
    ll N,C;
    cout<<"Enter N C : ";
    cin>>N>>C;
    ll A[N+1],B[N+1],i,fg=0,T[N+1]={0},tsum;
    for(i=2;i<=N;i++)
    {
        cin>>A[i];
    }
    for(i=2;i<=N;i++)
    {
        cin>>B[i];
    }
    //T[1]=0;
    for(i=2;i<=N;i++)
    {
        cout<<"i = "<<i<<endl;
        if(fg==0)
        {
            cout<<"fg==0"<<" tsum initially= "<<tsum<<endl;
            if(tsum+A[i]<=tsum+B[i]+C)
            {
                cout<<"tsum + "<<A[i]<<" <= "<<"tsum + "<<B[i]<<" + "<<C[i]<<endl;
                tsum+=A[i];
                cout<<"tsum new is tsum+=A[i] = "<<tsum<<endl;
            }
            else
            {
                cout<<"tsum + "<<A[i]<<" > "<<"tsum + "<<B[i]<<" + "<<C[i]<<endl;
                tsum+=B[i]+C;
                fg++;
                cout<<"fg incremented "<<"tsum new is tsum +=B[i]+C is : "<<tsum<<endl;
            }
        }
        else
        {
            cout<<"fg==1"<<" tsum initially= "<<tsum<<endl;
            if(tsum+A[i]<=tsum+B[i])
            {
                cout<<"tsum + "<<A[i]<<" <= "<<"tsum + "<<B[i]<<" + "<<C[i]<<endl;
                tsum+=A[i];
                fg=0;
                cout<<"fg is made 0 "<<"tsum new is tsum += A[i] : "<<tsum<<endl;
            }
            else
            {
                cout<<"tsum + "<<A[i]<<" > "<<"tsum + "<<B[i]<<endl;
                tsum+=B[i];
                cout<<"tsum new is tsum += B[i] is : "<<tsum<<endl;
            }
        }
        T[i]=tsum;
    }
    for(i=1;i<=N;i++)
    {
        cout<<T[i]<<" ";
    }
    cout<<endl;
    return 0;
}
