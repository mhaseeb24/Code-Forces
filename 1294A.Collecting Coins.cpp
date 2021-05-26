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
void solve(ll a,ll b,ll c,ll n)
{
    vector<ll>Tr;
    Tr.pb(a);Tr.pb(b);
    Tr.pb(c);
    sort(Tr.begin(),Tr.end());
    n=n-(Tr.at(2)-Tr.at(0));
    n=n-(Tr.at(2)-Tr.at(1));
    if(n<0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(n%3==0 || n==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        solve(a,b,c,n);
        t--;
    }
    return 0;
}
