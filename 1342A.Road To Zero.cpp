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
void solve(ll x,ll y,ll a,ll b)
{
    if(b>2*a)
    {
        cout<<x*a+y*a<<endl;
        return;
    }
    else
    {
        ll mx=max(x,y);
        ll mn=min(x,y);
        ll ans;
        ans=mn*b;
        mx=mx-mn;
        ans+=mx*a;
        cout<<ans<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll a,b,x,y;
        cin>>x>>y>>a>>b;
        solve(x,y,a,b);
        t--;
    }
    return 0;
}

