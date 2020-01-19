#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
        if(a==0)
        {
                return b;
        }
        return gcd(b%a,a);
}

bool solve(int a,int b)
{
        if(a==1||b==1)
        {
                return false;
        }
        else
        if(a==b)
        {
                return true;
        }
        if(gcd(a,b)==1)
        {
                return false;
        }
        else
        {
                return true;
        }
}

int main()
{
        int T,a,b;
        cin>>T;
        while(T--)
        {
                cin>>a>>b;
                if(solve(min(a,b),max(a,b)))
                {
                        cout<<"Infinite"<<endl;
                }
                else
                {
                        cout<<"Finite"<<endl;
                }
        }
        return 0;
}
