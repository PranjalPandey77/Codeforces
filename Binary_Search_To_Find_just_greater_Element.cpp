#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,low,high,mid,t,i;
	printf("Enter the number of elements :");
	scanf("%d",&N);
	int arr[N];
	printf("Now Enter the array:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key :");
	scanf("%d",&t);
	low = 0, high = N-1;
	while (low != high) 
	{
    	mid = (low + high) / 2; 
    	if (arr[mid] <= t) 
		{
        	low = mid + 1;
    	}
    	else 
		{
        	high = mid;
    	}
	}
	printf("The key is found at : %d and val : %d",low,arr[low]);
	return 0;
}
