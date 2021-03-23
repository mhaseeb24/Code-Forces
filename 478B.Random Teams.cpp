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
void solve(ll n,ll m)
{
    ll MAX,MIN;
    ll x=n,y=m;
    x=x-(y-1);
    MAX=((x)*(x-1))/2;
    x=n,y=m;
    if(x%y==0)
    {
        x=x/y;
        MIN=y*((x*(x-1))/2);
    }
    else
    {
        ll tr=x/y;
        ll rem=x%y;
        MIN=(rem*((tr*(tr+1))/2))+((m-rem)*(tr*(tr-1))/2);
    }
    cout<<MIN<<" "<<MAX;
}
int main()
{
    lessTime;
    ll n,m;
    cin>>n>>m;
    solve(n,m);
    return 0;
}
