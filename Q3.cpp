#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	int N,i,fg=1;
	scanf("%d",&N);
	int a[N+9];
	map<int,int> hash;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		hash[a[i]]++;
		if(hash[a[i]]>2)
		{
			fg=0;
		}
	}
	
	
	sort(a,a+N);
	
	
	if(fg==1)
	{
		cout<<"YES\n";
		int n1,n2;
		vector<int> is,ds;
		for(i=a[0];i<=a[N-1];i++)
		{
			if(hash[i]==1)
			{
				//ds.insert(ds.begin(),i);
				ds.pb(i);	
			}
			else
			if(hash[i]==2)
			{
				is.pb(i);
				//ds.insert(ds.begin(),i);
				ds.pb(i);
			}
		}
		n1=is.size();
		cout<<n1<<endl;
		if(n1==0)
		{
			cout<<endl;
		}
		else
		{
			for(i=0;i<n1;i++)
			{
				cout<<is[i]<<" ";
			}
			cout<<endl;
		}
		n2=ds.size();
		cout<<n2<<endl;
		if(n2==0)
		{
			cout<<endl;
		}
		else
		{
			for(i=n2-1;i>=0;i--)
			{
				cout<<ds[i]<<" ";
			}
		}
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
