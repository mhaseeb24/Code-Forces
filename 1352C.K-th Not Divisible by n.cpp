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
void solve(ll n,ll k)
{
    ll ans;
    ll x=n*(k/(n-1));
    ans=x+(k%(n-1));
    if(k%(n-1)==0)
    {
        ans--;
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
        ll n,k;
        cin>>n>>k;
        solve(n,k);
        t--;
    }
    return 0;
}
