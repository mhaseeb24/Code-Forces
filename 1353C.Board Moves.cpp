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
void solve(ll n)
{
    ll ans=0;
    while(n>=1)
    {
        ll x=n/2;
        ans=ans+(n*2*x)+((n-2)*2*x);
        n=n-2;
    }
    cout<<ans<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
