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
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        cout<<(n/2)+1<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    ll n;
    cin>>t;
    while(t)
    {
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
