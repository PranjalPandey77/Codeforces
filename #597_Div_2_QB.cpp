#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int main()
{
        int T,i;
        cin>>T;
        while(T--)
        {
                int N,r,p,s,fg;
                cin>>N;
                cin>>r>>p>>s;
                string Bob,Alice;
                cin>>Bob;
                char ch;
                for(i=0;i<N;i++)
                {
                        if(Bob[i]=='R')
                        {
                                if(p>0)
                                {
                                        ch='P';
                                        Alice.pb(ch);
                                        p--;
                                }
                                else
                                {
                                        ch='t';
                                        Alice.pb(ch);
                                }
                        }
                        else
                        if(Bob[i]=='P')
                        {
                                if(s>0)
                                {
                                        ch='S';
                                        Alice.pb(ch);
                                        s--;
                                }
                                else
                                {
                                        ch='t';
                                        Alice.pb(ch);
                                }
                        }
                        else
                        if(Bob[i]=='S')
                        {
                                if(r>0)
                                {
                                        ch='R';
                                        Alice.pb(ch);
                                        r--;
                                }
                                else
                                {
                                        ch='t';
                                        Alice.pb(ch);
                                }
                        }
                }



                fg=0;
                for(i=0;i<N;i++)
                {
                        if(Alice[i]!='t')
                        {
                                fg++;
                        }
                }
                if(fg>=(ceil(N/(2.0))))
                {
                        fg=1;
                        i=0;
                        while(i<N&&p>0)
                        {
                                if(Alice[i]=='t')
                                {
                                        Alice[i]='P';
                                        p--;
                                }
                                i++;
                        }
                        while(i<N&&r>0)
                        {
                                if(Alice[i]=='t')
                                {
                                        Alice[i]='R';
                                        r--;
                                }
                                i++;
                        }
                        while(i<N&&s>0)
                        {
                                if(Alice[i]=='t')
                                {
                                        Alice[i]='S';
                                        s--;
                                }
                                i++;
                        }
                }
                else
                {
                        fg=0;
                }


                if(fg==1)
                {
                        cout<<"Yes"<<endl;
                        cout<<Alice<<endl;
                }
                else
                {
                        cout<<"No"<<endl;
                }
        }
        return 0;
}
