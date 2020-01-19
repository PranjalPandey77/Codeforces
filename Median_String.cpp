#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	string s,t;
	scanf("%d",&k);
	cin>>s;
	cin>>t;
	long long total=1;
	for(i=k-1;i>=0;i--)
	{
		if(s[i]-t[i]>0)
		{
			total*=(t[i]-96);
		}
	}
	return 0;
}
