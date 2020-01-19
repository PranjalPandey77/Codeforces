#include<bits/stdc++.h>

#define mod
#define pb push_back

using namespace std;

int main()
{
        string s;
        cin>>s;
        int i=0,j,L=s.length(),cnt;
        vector <int> V;
        while(i<L)
        {
                if((i<L-1)&&((s[i]=='n'&&s[i+1]=='n')||(s[i]=='u'&&s[i+1]=='u')))
                {
                        cnt=0;
                        j=i;
                        while(j<N&&s[j]==s[i])
                        {
                                cnt++;
                                j++;
                        }
                        i=j;
                        V.pb(cnt);
                }
                else
                {
                        i++;
                }
        }

        return 0;
}
