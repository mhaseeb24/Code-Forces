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
int main()
{
    lessTime;
    ll n,x;
    cin>>n>>x;
    ll c=1,d=n;
    int ans=0;
    while(c<=d)
    {
        if(c*d>x)
        {
            d--;
        }
        else if(c*d<x)
        {
            c++;
        }
        else if(c*d==x&&c!=d)
        {
            ans=ans+2;
            c++;
            d--;
        }
        else
        {
            ans=ans+1;
            c++;
            d--;
        }
    }
    cout<<ans;
    return 0;
}
