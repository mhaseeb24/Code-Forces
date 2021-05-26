/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#pragma GCC optimize("O2")
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
void solve(ll w,ll h,ll n)
{
    ll a = 0,b = 0;
    while(w % 2 == 0)
    {
        a++;
        w=w/2;
    }
    a=pow(2,a);
    while(h % 2 == 0)
    {
        b++;
        h=h/2;
    }
    b=pow(2,b);
    if(a*b>=n)
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
    int t;
    cin >> t;
    while(t)
    {
        ll w,h,n;
        cin >> w >> h >> n;
        solve(w,h,n);
        t--;
    }
    return 0;
}
