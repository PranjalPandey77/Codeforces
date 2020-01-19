#include<bits/stdc++.h>

using namespace std;

int main()
{
        int T,a,b,c,ans,z;
        cin>>T;
        while(T--)
        {
                ans=0;
                cin>>a>>b>>c;
                z=min(b,c/2);
                ans+=(3*z);
                b-=z;
                c-=(2*z);
                z=min(a,b/2);
                ans+=(3*z);
                a-=z;
                b-=(2*z);
                cout<<ans<<endl;
        }
        return 0;
}
