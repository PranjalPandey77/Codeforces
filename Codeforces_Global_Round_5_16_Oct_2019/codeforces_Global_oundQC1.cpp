#include<bits/stdc++.h>

#define pb push_back
#define tiii tuple<int,int,int>
#define mt make_tuple

using namespace std;

vector < tiii > Pts;

int main()
{
        int N,i,a,b,c;
        cin>>N;
        int a[N+11],b[N+11],s[N+11]={0};
        for(i=0;i<N;i++)
        {
                cin>>a>>b>>c;
                Pts.pb(mt(a,b,c));
        }
        return 0;
}
