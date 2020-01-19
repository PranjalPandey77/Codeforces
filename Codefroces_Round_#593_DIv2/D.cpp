/*#include<bits/stdc++.h>

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define tiii tuple<int,int,int>
#define mt make_tuple

using namespace std;

int N,M,K,X[4],Y[4],cc;
map<pii,bool> Mp,Visit;

bool checkValidPoint(pii pt,int j)
{
        int x=pt.F+X[j];
        int y=pt.S+Y[j];
        if((x>=1&&x<=N)&&(y>=1&&y<=M))
        {
                return true;
        }
        else
        {
                return false;
        }
}

void bfs(int xi,int yi)
{
        queue<pii> Q;
        Q.push(mp(xi,yi));
        pii Pt;
        int j;
        while(!Q.empty())
        {
                Pt=Q.front();
                Q.pop();
                Visit[Pt]=true;
                for(j=0;j<4;j++)
                {
                        if(checkValidPoint(Pt,j)&&Mp[mp(Pt.F+X[j],Pt.S+Y[j])]==false&&Visit[mp(Pt.F+X[j],Pt.S+Y[j])]==false)
                        {
                                Q.push(mp(Pt.F+X[j],Pt.S+Y[j]));
                        }
                }
        }
}

int main()
{
        cin>>N>>M>>K;
        int i,x,y;
        X[0]=0,Y[0]=1;
        X[1]=1,Y[1]=0;
        X[2]=0,Y[2]=-1;
        X[3]=-1,Y[0]=0;
        for(i=0;i<K;i++)
        {
                cin>>x>>y;
                Mp[mp(x,y)]=true;
        }
        cc=0;
        for(x=1;x<=N;x++)
        {
                for(y=1;y<=M;y++)
                {
                        if(Mp[mp(x,y)]==false&&Visit[mp(x,y)]==false)
                        {
                                cc++;
                                if(cc>1)
                                {
                                        break;
                                }
                                bfs(x,y);
                        }
                }
                if(cc>1)
                {
                        break;
                }
        }
        if(cc==1)
        {
                cout<<"Yes";
        }
        else
        {
                cout<<"No";
        }
        return 0;
}*/

#include<bits/stdc++.h>

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define tiii tuple<int,int,int>
#define mt make_tuple

using namespace std;

typedef long long ll;

ll N,M,K;
int X[4],Y[4],cc;
map<pii,bool> Mp;
vector<pii> Obstacles;

int main()
{
        cin>>N>>M>>K;
        int i,x,y;
        X[0]=0,Y[0]=1;
        X[1]=1,Y[1]=0;
        X[2]=0,Y[2]=-1;
        X[3]=-1,Y[0]=0;
        for(i=0;i<K;i++)
        {
                cin>>x>>y;
                Obstacles.pb(mp(x,y));
                Mp[mp(x,y)]=true;
        }
        sort(Obstacles.begin(),Obstacles.end());
        ll cv=0,c=N*M-K;
        int dir=0;
        while(cv<c)
        {
                switch(dir)
                {
                        case 0 :
                        {

                                break;
                        }

                        case 1 :
                        {

                                break;
                        }

                        case 2 :
                        {

                                break;
                        }

                        case 3 :
                        {

                                break;
                        }
                }
        }
        return 0;
}
