#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll x)
{
    ll a=0;
    while(x!=0)
    {
        if(x%2!=0)
        {
            a++;
            x=x-1;
        }
        else
        {
            x=x/2;
        }
    }
    cout<<a;
}
int main()
{
    ll x;
    cin>>x;
    solve(x);
    return 0;
}
