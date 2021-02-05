#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int x,int y,string s)
{
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='U')
        {
            a++;
        }
        else if(s.at(i)=='D')
        {
            b--;
        }
        else if(s.at(i)=='R')
        {
            c++;
        }
        else
        {
            d--;
        }
    }
    if(x>=0&&y>=0)
    {
        if(c>=x&&a>=y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(x>=0&&y<=0)
    {
        if(c>=x&&b<=y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(x<=0&&y>=0)
    {
        if(d<=x&&a>=y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        if(d<=x&&b<=y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
int main()
{
    int T;
    cin>>T;
    int px,py;
    string s;
    while(T--)
    {
        cin>>px>>py;
        cin>>s;
        solve(px,py,s);
    }
    return 0;
}
