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
#define for(i,a,n) for(int i=0;i<n;i++)
#define for(i,a,b) for(int i=a;i<b;i++)
#define for(i,n,a) for(int i=n-1;i<=0;i--)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void REPL(int &a,int &b,int &c,int &d)
{
    int arr[10]={0,1,5,-1,-1,2,-1,-1,8,-1};
    a=arr[a];
    b=arr[b];
    c=arr[c];
    d=arr[d];
}
bool t_check(int h,int m,int hh,int mm)
{
    int a,b,c,d;
    b=h%10;
    h=h/10;
    a=h;
    d=m%10;
    m=m/10;
    c=m;
    if(a==0||a==1||a==2||a==5||a==8)
    {
        if(b==0||b==1||b==2||b==5||b==8)
        {
            if(c==0||c==1||c==2||c==5||c==8)
            {
                if(d==0||d==1||d==2||d==5||d==8)
                {
                    REPL(a,b,c,d);
                    if((d*10)+c>=hh||(b*10)+a>=mm)
                    {
                        return 0;
                    }
                    else
                    {
                        return 1;
                    }
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
void solve(int h,int m,string s)
{
    int hour=stoi(s.substr(0,2));
    int minute=stoi(s.substr(3,4));
    while(!t_check(hour,minute,h,m))
    {
        minute++;
        if(minute==m)
        {
            minute=0;
            hour++;
        }
        if(hour==h)
        {
            hour=0;
        }
    }
	cout<<setw(2)<<setfill('0')<<hour<<":";
	cout<<setw(2)<<setfill('0')<<minute<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int h,m;
        cin>>h>>m;
        string s;
        cin>>s;
        solve(h,m,s);
        t--;
    }
    return 0;
}
