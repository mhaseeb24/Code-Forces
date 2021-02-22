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
void solve(ll n,ll k)
{
    if(n%2==0)
    {
        if(k%n==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<k%n<<endl;
        }
    }
    else
    {
        k--;
        ll x=(n/2)-1;
        ll y=x+1;
        ll ans=1;
        ll d=x*(k/y);
        ans+=d;
        ll e=k/y;
        ans+=2*e;
        ans+=k-e-d;
        ans=(ans%n);
        if(ans==0)
        {
            ans=n;
        }
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
        ll n,k;
        cin>>n>>k;
        solve(n,k);
        t--;
    }
    return 0;
}
