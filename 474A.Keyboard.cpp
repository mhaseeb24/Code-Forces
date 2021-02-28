/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(char dir,string s)
{
    string a="qwertyuiop";
    string b="asdfghjkl;";
    string c="zxcvbnm,./";
    if(dir=='L')
    {
        int x=0,y=0,z=0,temp;
        for(int i=0;i<s.size();i++)
        {
            x=0;y=0;z=0;
            for(int j=0;j<a.size();j++)
            {
                if(a.at(j)==s.at(i))
                {
                    x=1;
                    temp=j;
                    goto LABEL1;
                }
            }
            for(int j=0;j<b.size();j++)
            {
                if(b.at(j)==s.at(i))
                {
                    y=1;
                    temp=j;
                    goto LABEL1;
                }
            }
            for(int j=0;j<c.size();j++)
            {
                if(c.at(j)==s.at(i))
                {
                    z=1;
                    temp=j;
                    goto LABEL1;
                }
            }
            LABEL1:{}
            if(x==1)
            {
                cout<<a.at(temp+1);
            }
            else if(y==1)
            {
                cout<<b.at(temp+1);
            }
            else
            {
                cout<<c.at(temp+1);
            }
        }
    }
    else
    {
        int x=0,y=0,z=0,temp;
        for(int i=0;i<s.size();i++)
        {
            x=0;y=0;z=0;
            for(int j=0;j<a.size();j++)
            {
                if(a.at(j)==s.at(i))
                {
                    x=1;
                    temp=j;
                    goto LABEL2;
                }
            }
            for(int j=0;j<b.size();j++)
            {
                if(b.at(j)==s.at(i))
                {
                    y=1;
                    temp=j;
                    goto LABEL2;
                }
            }
            for(int j=0;j<c.size();j++)
            {
                if(c.at(j)==s.at(i))
                {
                    z=1;
                    temp=j;
                    goto LABEL2;
                }
            }
            LABEL2:{}
            if(x==1)
            {
                cout<<a.at(temp-1);
            }
            else if(y==1)
            {
                cout<<b.at(temp-1);
            }
            else
            {
                cout<<c.at(temp-1);
            }
        }
    }
}
int main()
{
    lessTime;
    char dir;
    string s;
    cin>>dir;
    cin>>s;
    solve(dir,s);
    return 0;
}
