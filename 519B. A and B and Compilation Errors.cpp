/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n)
{
    vector<ll>A;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    ll a1=accumulate(A.begin(),A.end(),0LL);
    A.clear();
    for(int i=0;i<n-1;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    ll a2=accumulate(A.begin(),A.end(),0LL);
    A.clear();
    for(int i=0;i<n-2;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    ll a3=accumulate(A.begin(),A.end(),0LL);
    cout<<a1-a2<<endl<<a2-a3;
}
int main()
{
    lessTime;
    ll n;
    cin>>n;
    solve(n);
    return 0;
}
