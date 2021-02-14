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
    int ans=0;
    while(n!=1)
    {
        if(n%6==0)
        {
            n=n/6;
            ans++;
        }
        else
        {
            n=n*2;
            ans++;
        }
        if(n<=0)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    ll n;
    while(t)
    {
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
