#include<bits/stdc++.h>
using namespace std;
int main()
{
		printf("Hello :");
		long long ans=0,temp=0;
        int N,i,j,ind;
        char ch;
        scanf("%d",&N);
        int H[N],mark[N];
        for(i=0;i<N;i++)
        {
        	scanf("%d",&H[i]);
        	mark[i]=1;
		}
		sort(H,H+N);
		ch='e';   //  first selecting even number
		for(i=N-1;i>=0;i--)
		{
				if(H[i]%2==0)
				{
					break;	
				}
		}
		j=N-1;
		ind=i;
		while(i>=0)
		{
			if(ch=='e')
			{
				if(H[i]%2==0)
				{
					mark[i]=0;
					ch='o';
					if(j>ind)
					{
						mark[j--]=0;
						ch='e';
					}
				}
				i--;
			}
			else
			{
				if(H[i]%2!=0)
				{
					mark[i]=0;
					ch='e';
				}
				i--;
			}
		}
		if(j>ind&&ch=='o')
		{
			mark[j--]=0;
		}
		for(i=0;i<N;i++)
		{
			if(mark[i]!=0)
			{
				ans+=H[i];
			}
		}
		for(i=0;i<N;i++)
        {
        	mark[i]=1;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		ch='o';   //  first selecting even number
		for(i=N-1;i>=0;i--)
		{
				if(H[i]%2!=0)
				{
					break;	
				}
		}
		j=N-1;
		ind=i;
		while(i>=0)
		{
			if(ch=='o')
			{
				if(H[i]%2!=0)
				{
					mark[i]=0;
					ch='e';
					if(j>ind)
					{
						mark[j--]=0;
						ch='o';
					}
				}
				i--;
			}
			else
			{
				if(H[i]%2!=0)
				{
					mark[i]=0;
					ch='o';
				}
				i--;
			}
		}
		if(j>ind&&ch=='e')
		{
			mark[j--]=0;
		}
		for(i=0;i<N;i++)
		{
			if(mark[i]!=0)
			{
				temp+=H[i];
			}
		}
		if(ans>temp)
		{
			cout<<temp;
		}
		else
		{
			cout<<ans;
		}
        return 0;
}
