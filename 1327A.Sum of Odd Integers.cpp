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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define itr(i,a,b) for(int i=a;i>=b;i--)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n,ll k)
{
    ll x=k*k;
    while(x<n)
    {
        x=x+2;
    }
    if(x==n)
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
