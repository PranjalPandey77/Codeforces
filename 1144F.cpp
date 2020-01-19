#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pii pair<int,int>
#define SizeV 200009
using namespace std;
int bfs(int N,const vector<int> adj[],int *state,int *pred,int *level,char *type)
{
//	printf("Entered bfs Function.\n");
	int i;
	queue<int> Q;
	char chi;
	Q.push(1);
	state[1]=1;
	level[1]=1;
	type[1]='i';
	int cur;
	while(!Q.empty())
	{
		cur=Q.front();
		chi=type[cur];
		Q.pop();
		state[cur]=2;
		for(i=0;i<adj[cur].size();i++)
		{
			if(state[adj[cur][i]]==0)
			{
				Q.push(adj[cur][i]);
				state[adj[cur][i]]=1;
				pred[adj[cur][i]]=cur;	
				level[adj[cur][i]]=level[cur]+1;
				if(chi=='i')
				{
					type[adj[cur][i]]='o';
				}
				else
				{
					type[adj[cur][i]]='i';
				}
			}
			else
			{
				if(level[pred[cur]]==level[pred[adj[cur][i]]])
				{
					return 0;
				}
			}
		}
	}
//	printf("Exitting bfs function.\n");
	return 1;
}

int main()
{
	int N,M,i,u,v;	
//	printf("Entered MNNIT N M :");
	scanf("%d%d",&N,&M);
	vector<int> adj[N],ans;
	vector<pii> edge;
	int state[N],pred[N],level[N];
	char type[N];
	for(i=1;i<=M;i++)
	{
		scanf("%d%d",&u,&v);
		edge.pb(mp(u-1,v-1));
		adj[u-1].pb(v-1),adj[v-1].pb(u-1);
	}
	for(i=0;i<N;i++)
	{
		state[i]=0;
		pred[i]=-1;
		level[i]=0;
	}

	if(bfs(N,adj,state,pred,level,type))
	{
		for(i=0;i<edge.size();i++)
		{
			u=edge[i].F;
			v=edge[i].S;
			if(type[u]=='i'&&type[v]=='o')
			{
				ans.pb(1);
			}
			else
			{
				ans.pb(0);
			}
		}
		cout<<"YES\n";
		for(i=0;i<ans.size();i++)
		{
			cout<<ans[i];
		}
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
