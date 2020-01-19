#include<bits/stdc++.h>
#define pb push_back
#define SizeV 100
using namespace std;
int Temp[SizeV],ans[SizeV],N,A[SizeV],leng,t;
int getIndex(int *Temp,int t,int Ai)
{
	//printf("Entered getIndex function.\n");
	int low,high,mid,i;
	low=0,high=t;
	while (low != high)
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
void LIS()
{
	int i,ind;
	Temp[0]=0;
	for(i=1;i<N;i++)
	{
		if(A[i]>A[Temp[t]])
		{
		//	printf("Inside 1 if \n ");
			Temp[++t]=i;
			leng++;
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
			ind=getIndex(Temp,t,A[i]);
		//	printf("Got Index :%d\n",ind);
			Temp[ind]=i;
		//	printf("made the value of Temp[%d] to %d \n",ind,i);
			ans[Temp[ind]]=Temp[ind-1];
		//	printf("made the value of ans[Temp[%d]] to Temp[%d] \n",t,t-1);
		}
	}
}
int main()
{
	int i;
	printf("Enter number of elements : ");
	scanf("%d",&N);
	printf("Enter the array :\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++)
	{
		ans[i]=-1;
	}
	LIS();
	vector<int> ANS;
	
	i=Temp[t];
	printf("LIS is : ");
	int cnt=0;
	while(ans[i]!=-1)
	{
		//printf("%d ",A[i]);
		if(cnt==0)
		{
			ANS.pb(A[i]);
		}
		else
		{
			if(ANS[cnt-1]!=A[i])
			{
				ANS.pb(A[i]);
			}
		}
		i=ans[i];
		cnt++;
	}
	//printf("%d ",A[i]);
	
	
	
	
	
	if(cnt==0)
	{
		ANS.pb(A[i]);
	}
	else
	{
		if(ANS[cnt-1]!=A[i])
		{
			ANS.pb(A[i]);
		}
	}
	
	
	printf("The length of LIS is : %d\n",ANS.size());
	
	
	for(i=ANS.size()-1;i>=0;i--)
	{
		printf("%d ",ANS[i]);
	}
	
	
	
	
	
/*	printf("The Array temp is :\n");
	for(i=0;i<=t;i++)
	{
		printf("%d ",Temp[i]);
	}
	printf("The Array ans is :\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",ans[i]);
	}*/
	return 0;
}
