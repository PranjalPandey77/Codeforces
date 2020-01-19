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
    int T,i,j,L,cnt;
    cin>>T;
    string s;
    while(T--)
    {
        cin>>s;
        L=s.length();
        map <char,int> Hash,KeysMf,Lock;
        for(i=0;i<L;i++)
        {
            Hash[s[i]]++;
        }
        i=0;
        while(i<L)
        {
            if(Hash[s[i]]%2==0&&Lock[s[i]]==0)
            {
                j=i;
                cnt=0;
                while(s[j]==s[i])
                {
                    cnt++;
                    j++;
                }
                if(cnt%2==0)
                {
                    KeysMf[s[i]]=1;
                }
                else
                {
                    KeysMf[s[i]]=0;
                    Lock[s[i]]=1;
                }
                i=j;
            }
            else
            {
                i++;
            }
        }
        char ch;
        for(ch='a';ch<='z';ch++)
        {
            if(KeysMf[ch]==0&&Hash[ch]>0)
            {
                cout<<ch;
            }
        }
        cout<<endl;
    }
    return 0;
}
