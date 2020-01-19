#include<bits/stdc++.h>
#define pb push_back
#define mt make_tuple
#define mp make_pair
#define F first
#define S second
#define SizeV 200009
#define pii pair<int,pair<int,int> >
using namespace std;
int main()
{
	int N,i,M,ind;
//	printf("Enter  N :");
	scanf("%d",&N);
	int a[N+9],hash[SizeV];
	for(i=0;i<SizeV;i++)
	{
		hash[i]=0;
	}
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		hash[a[i]]++;
	}
	M=hash[0];
	ind=0;
	for(i=1;i<SizeV;i++)
	{
		if(hash[i]>M)
		{
			M=hash[i];
			ind=i;
		}
	}
	for(i=0;i<N;i++)
	{
		if(a[i]==ind)
		{
			ind=i;
			break;
		}
	}
	vector<pii> ans;
	for(i=ind-1;i>=0;i--)
	{
		if(a[i]>a[i+1])
		{
			a[i]=a[i]-(a[i]-a[i+1]);
			ans.pb(mp(2,mp(i+1,i+2)));
		}
		else
		if(a[i]<a[i+1])
		{
			a[i]=a[i]+(a[i+1]-a[i]);
			ans.pb(mp(1,mp(i+1,i+2)));
		}
	}
	for(i=ind+1;i<N;i++)
	{
		if(a[i]>a[i-1])
		{
			a[i]=a[i]-(a[i]-a[i-1]);
			ans.pb(mp(2,mp(i+1,i)));
		}
		else
		if(a[i]<a[i-1])
		{
			a[i]=a[i]+(a[i-1]-a[i]);
			ans.pb(mp(1,mp(i+1,i)));
		}
	}
	cout<<ans.size()<<endl;
	for(i=0;i<ans.size();i++)
	{
		cout<<ans[i].F<<" "<<ans[i].S.F<<" "<<ans[i].S.S<<endl;
	}
	return 0;
}
