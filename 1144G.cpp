#include<bits/stdc++.h>
#define pb push_back
#define SizeV 200009
using namespace std;
vector<int> IS;
int N,t,leng;
int getIndex(int *Temp,int Ai,int *A)
{
//	printf("Entered getIndex function.\n");
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
		//	printf("Inside 1 if \n ");
			Temp[++(t)]=i;
			(leng)++;
			ans[Temp[t]]=Temp[t-1];
		//	printf("Leng Incremented %d   made the value of Temp[%d] to %d \n",leng,t,i);
		//	printf("made the value of ans[Temp[%d]] to Temp[%d] \n",t,t-1);
		}
		else
		if(A[i]<A[Temp[0]])
		{
		//	printf("Inside 2 if \n ");
			Temp[0]=i;
		//	printf("made the value of Temp[0] to %d \n",i);
		}
		else
		{
		//	printf("Inside 3 if \n ");
			ind=getIndex(Temp,A[i],A);
		//	printf("Got Index :%d\n",ind);
			Temp[ind]=i;
		//	printf("made the value of Temp[%d] to %d \n",ind,i);
			ans[Temp[ind]]=Temp[ind-1];
		//	printf("made the value of ans[Temp[%d]] to Temp[%d] \n",t,t-1);
		}
	}
	i=Temp[t];	
//	printf("LIS is : ");
	int cnt=0;
	while(ans[i]!=-1)
	{
		if(cnt==0)
		{
			IS.pb(A[i]);
//			printf("%d ",A[i]);
		}
		else
		{
			if(IS[cnt-1]!=A[i])
			{
				IS.pb(A[i]);
	//			printf("%d ",A[i]);
			}
		}
		i=ans[i];
		cnt++;
	}
	
	
	
	
	
	
	if(cnt==0)
	{
		IS.pb(A[i]);
//		printf("%d ",A[i]);
	}
	else
	{
		if(IS[cnt-1]!=A[i])
		{
			IS.pb(A[i]);
	//		printf("%d ",A[i]);
		}
	}
}
int main()
{
	int i,flag=1;
//	printf("Enter the v of N :");
	scanf("%d",&N);
	int hash[SizeV],A[N],Temp[N];
//	printf("Now Enter the array :\n");
	for(i=0;i<N;i++)
	{
	//	printf("Enter A[%d] : ",i);
		scanf("%d",&A[i]);
		hash[A[i]]=0;
	}
//	printf("Going to hash the values");
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
	////	printf("Going to call LIS : \n");
		LIS(A,Temp);
	/*	printf("\nGoing to Print LISs in main function  : ");
		for(i=IS.size()-1;i>=0;i--)
		{
			printf("%d ",IS[i]);
		}
	//	printf("\n");*/
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
	   /* printf("Now Going toprint hashed values :\n");
	    for(i=0;i<N;i++)
	    {
	    	printf("%d ",hash[A[i]]);
		}
		printf("\n");*/
		int ds=0;
		for(i=0;i<N;i++)
		{
			if(i==0)
			{
				if(hash[A[i]]==1)
				{
					DS.pb(A[i]);
					//printf()
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
					//	printf("Flag is made 0.\n");
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
