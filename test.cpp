#include<bits/stdc++.h>

using namespace std;

int main()
{
        int N,i;
        //cout<<"Enter N : ";
        cin>>N;
        int a[N+11],b[N+11]={0},c[N+11]={0},sum=0;
        for(i=0;i<N;i++)
        {
                cin>>a[i];
                if(a[i]%2!=0)
                {
                        c[i]=1;
                        b[i]=a[i]/2;
                }
                else
                {
                        b[i]=a[i]/2;
                }
                sum+=b[i];
        }
        if(sum>0)
        {
                i=0;
                while(sum!=0&&i<N)
                {
                        if(c[i])
                        {
                                if(b[i]==0)
                                {
                                        if(a[i]<0)
                                        {
                                                b[i]--;
                                                sum--;
                                        }
                                }
                                else
                                if(b[i]<0)
                                {
                                      b[i]--;
                                      sum--;
                               }
                       }
                       i++;
               }
        }
        else
        if(sum<0)
        {
               i=0;
                while(sum!=0&&i<N)
                {
                        if(c[i])
                        {
                                if(b[i]==0)
                                {
                                        if(a[i]>0)
                                        {
                                                b[i]++;
                                                sum++;
                                        }
                                }
                                else
                                if(b[i]>0)
                                {
                                      b[i]++;
                                      sum++;
                               }
                       }
                       i++;
               }
        }
        for(i=0;i<N;i++)
        {
                cout<<b[i]<<endl;
        }
        return 0;
}
