#include<bits/stdc++.h>
#define pb push_back
#define SizeV 200009
using namespace std;
vector<int> IS;
int N,t,leng;
int getIndex(int *Temp,int Ai,int *A)
{
	int low,high,mid,i;
	low=0,high=t;
	while (low!=high)
	{
    	mid=(low+high)/2;
    	if (A[Temp[mid]]<=Ai)
		{
        	low=mid+1;
    	}
    	else 
		{
        	high=mid;
    	}
	}
	return low;
}
void LIS(int *A,int *Temp)
{
	int i,ind,ans[N];
	for(i=0;i<N;i++)
	{
		ans[i]=-1;
	}
	Temp[0]=0;
	for(i=1;i<N;i++)
	{
		if(A[i]>A[Temp[t]])
		{
			Temp[++(t)]=i;
			(leng)++;
			ans[Temp[t]]=Temp[t-1];
		}
		else
		if(A[i]<A[Temp[0]])
		{
			Temp[0]=i;
		}
		else
		{
			ind=getIndex(Temp,A[i],A);
			Temp[ind]=i;
			ans[Temp[ind]]=Temp[ind-1];
		}
	}
	i=Temp[t];	
	int cnt=0;
	while(ans[i]!=-1)
	{
		if(cnt==0)
		{
			IS.pb(A[i]);
		}
		else
		{
			if(IS[cnt-1]!=A[i])
			{
				IS.pb(A[i]);
			}
		}
		i=ans[i];
		cnt++;
	}
	if(cnt==0)
	{
		IS.pb(A[i]);
	}
	else
	{
		if(IS[cnt-1]!=A[i])
		{
			IS.pb(A[i]);
		}
	}
}
int main()
{
	scanf("%d",&N);
	int A[N],i;
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	int Temp[N],flag=1,hash[SizeV];
	for(i=0;i<N;i++)
	{
		hash[A[i]]=0;
	}
	for(i=0;i<N;i++)
	{
		hash[A[i]]++;
		if(hash[A[i]]>2)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		LIS(A,Temp);
		vector<int> DS;
		for(i=0;i<IS.size();i++)
		{
			if(hash[IS[i]]==2)
			{
				hash[IS[i]]=1;
			}
			else
			{
				hash[IS[i]]=0;
			}
		}
		int ds=0;
		for(i=0;i<N;i++)
		{
			if(i==0)
			{
				if(hash[A[i]]==1)
				{
					DS.pb(A[i]);
					ds++;
				}
			}
			else
			{
				if(hash[A[i]]==1)
				{
					DS.pb(A[i]);
					if(DS[ds]>DS[ds-1])
					{
						flag=0;
						break;
					}
				}
			}
		}
		if(flag==1)
		{
			cout<<"YES\n";
			for(i=0;i<N;i++)
			{
				printf("%d ",hash[A[i]]);
			}
		}
		else
		{
			cout<<"NO";
		}
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
