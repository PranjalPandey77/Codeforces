#include<bits/stdc++.h>

using namespace std;

int main()
{
        int N,i,j,ans=0;
        //cout<<"Enter N : ";
        cin>>N;
        int a[N+11],b[N+11],s[N+11]={0};
        for(i=0;i<N;i++)
        {
                cin>>a[i];
        }
        for(i=0;i<N;i++)
        {
                cin>>b[i];
        }
        i=0,j=0;
        for(i=0;i<N;i++)
        {
            if(s[a[i]]==0)
            {
                while(b[j]!=a[i])
                {
                    ans++;
                    s[b[j]]=-1;
                    j++;
                }
                s[a[i]]=-1;
                j++;
            }
        }
        cout<<ans;
        return 0;
}
