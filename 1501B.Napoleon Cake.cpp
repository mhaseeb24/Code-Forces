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
void solve(ll n)
{
    vector<ll>TT;
    ll temp;
    rep(i,0,n)
    {
        cin>>temp;
        TT.pb(temp);
    }
    vector<ll>ANS;
    ll track=0;
    itr(i,n-1,0)
    {
        track=max(track,TT.at(i));
        if(track>0)
        {
            ANS.pb(1);
        }
        else
        {
            ANS.pb(0);
        }
        if(track>0)
        {
            track--;
        }
    }
    itr(i,n-1,0)
    {
        cout<<ANS.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
