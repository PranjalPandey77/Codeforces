/*
Author : Pranjal Pandey
IT 3rd Year
MNNIT Allahabad
*/

#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
        ll T,N,i,ans,sb,bb,j;
        cin>>T;
        while(T--)
        {
                cin>>N;
                ll A[2*N];
                sb=0,bb=0;
                for(i=0;i<2*N;i++)
                {
                        cin>>A[i];
                        if(A[i]==1)
                        {
                                sb++;
                        }
                        else
                        {
                                bb++;
                        }
                }
                if(sb==bb)
                {
                        ans=0;
                }
                else
                {
                        ans=0;
                        if(sb>bb)
                        {
                                i=N-1;
                                j=N;
                                while((i>=0||j<2*N)&&sb>bb)
                                {
                                        if(i>=0&&A[i]==1)
                                        {
                                                ans++;
                                                i--;
                                                sb--;
                                        }
                                        else
                                        if(j<2*N&&A[j]==1)
                                        {
                                                ans++;
                                                j++;
                                                sb--;
                                        }
                                        else
                                        if(i>=0&&A[i]==2)
                                        {
                                                i--;
                                                ans++;
                                                bb--;
                                        }
                                        else
                                        if(j<2*N&&A[j]==2)
                                        {
                                                j++;
                                                ans++;
                                                bb--;
                                        }
                                }
                        }
                        else
                        {
                                i=N-1;
                                j=N;
                                while((i>=0||j<2*N)&&sb<bb)
                                {
                                        if(i>=0&&A[i]==2)
                                        {
                                                ans++;
                                                i--;
                                                bb--;
                                        }
                                        else
                                        if(j<2*N&&A[j]==2)
                                        {
                                                ans++;
                                                j++;
                                                bb--;
                                        }
                                        else
                                        if(i>=0&&A[i]==1)
                                        {
                                                i--;
                                                ans++;
                                                sb--;
                                        }
                                        else
                                        if(j<2*N&&A[j]==1)
                                        {
                                                j++;
                                                ans++;
                                                sb--;
                                        }
                                }
                        }
                }
                cout<<ans<<endl;
        }
        return 0;
}

