/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll x,ll n,ll m)
{
    while(x>=20&&n)
    {
        x=x/2+10;
        if(x<=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        n--;
    }
    while(m)
    {
        x=x-10;
        if(x<=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        m--;
    }
    while(n)
    {
        x=x/2+10;
        if(x<=0)
        {
            cout<<"YES"<<endl;
        }
        n--;
    }
    cout<<"NO"<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll x,n,m;
        cin>>x>>n>>m;
        solve(x,n,m);
        t--;
    }
    return 0;
}
