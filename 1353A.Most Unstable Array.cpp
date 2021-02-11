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
void solve(int n,ll m)
{
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<m<<endl;
        return;
    }
    else
    {
        cout<<2*m<<endl;
        return;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    ll m;
    while(t)
    {
        cin>>n>>m;
        solve(n,m);
        t--;
    }
    return 0;
}
