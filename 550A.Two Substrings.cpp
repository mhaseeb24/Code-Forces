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
#define itr(i,a,b) for(int i=a;i<b;i++)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(string s)
{
    int check1=1,check2=1;
//CHECKING FROM FRONT
    int c1=0,d1=0,e1=0,f1=0,x1=0,h1=0,g1=0;
    itr(i,0,s.size()-1)
    {
        if(s.at(i)=='A')
        {
            if(s.at(i+1)=='B'&&g1==0)
            {
                c1=i+1;
                f1=i;
                if(x1==0)
                {
                    g1++;
                    x1++;
                    d1=i+1;
                    e1=i;
                }
            }
        }
        if(s.at(i)=='B')
        {
            if(s.at(i+1)=='A'&&h1==0)
            {
                d1=i;
                e1=i+1;
                if(x1==0)
                {
                    h1++;
                    x1++;
                    c1=i;
                    f1=i+1;
                }
            }
        }
    }
    if(c1==d1||e1==f1)
    {
        check1=0;
    }
//CHECKING FROM BACK
    c1=0;d1=0;e1=0;f1=0;x1=0;h1=0;g1=0;
    for(int i=s.size()-1;i>0;i--)
    {
        if(s.at(i)=='B')
        {
            if(s.at(i-1)=='A'&&g1==0)
            {
                c1=i-1;
                f1=i;
                if(x1==0)
                {
                    g1++;
                    x1++;
                    d1=i-1;
                    e1=i;
                }
            }
        }
        if(s.at(i)=='A')
        {
            if(s.at(i-1)=='B'&&h1==0)
            {
                d1=i;
                e1=i-1;
                if(x1==0)
                {
                    h1++;
                    x1++;
                    c1=i;
                    f1=i-1;
                }
            }
        }
    }
    if(c1==d1||e1==f1)
    {
        check2=0;
    }
//calculating result
    if(check1==1||check2==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    lessTime;
    string s;
    cin>>s;
    solve(s);
    return 0;
}
