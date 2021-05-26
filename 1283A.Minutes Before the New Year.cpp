/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#pragma GCC optimize("O2")
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define itr(i,a,b) for(int i=a;i>=b;i--)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int h,int m)
{
    int min_ans;
    if(h==23)
    {
        if(m!=0)
        {
            min_ans=60-m;
        }
        else
        {
            min_ans=60;
        }
    }
    else
    {
        if(h==0)
        {
            min_ans=60*23;
        }
        else
        {
            min_ans=(23-h)*60;
        }
        if(m!=0)
        {
            min_ans+=60-m;
        }
        else
        {
            min_ans+=60;
        }
    }
    cout<<min_ans<<endl;
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
        solve(h,m);
        t--;
    }
    return 0;
}
