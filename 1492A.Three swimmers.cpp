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
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll p,ll a,ll b,ll c)
{
    a=(a)*ceil((long double)p/(long double)a);
    b=(b)*ceil((long double)p/(long double)b);
    c=(c)*ceil((long double)p/(long double)c);
    a=a-p;
    b=b-p;
    c=c-p;
    vector<ll>A;
    A.pb(a);
    A.pb(b);
    A.pb(c);
    sort(A.begin(),A.end());
    cout<<A.at(0)<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        solve(p,a,b,c);
        t--;
    }
    return 0;
}
