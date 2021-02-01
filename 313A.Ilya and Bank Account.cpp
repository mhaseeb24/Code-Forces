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
    if(n>=0)
    {
        cout<<n;
    }
    else
    {
        ll a,b;
        a=n/10;
        b=n%10;
        n=n/100;
        n=n*10+b;
        b=n;
        if(a>b)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    solve(n);
    return 0;
}
