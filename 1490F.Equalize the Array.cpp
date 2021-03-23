#pragma GCC optimize("O2")
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
    map<ll,ll>mp;
    ll temp;
    rep(i,0,n)
    {
        cin>>temp;
        mp[temp]++;
    }
    vector<ll>A;
    for(auto &e:mp)
    {
        A.pb(e.second);
    }
    sort(A.begin(),A.end());
    vector<ll>::iterator ip;
    ip=std::unique(A.begin(),A.end());
    A.resize(std::distance(A.begin(), ip));
    ll ans=INT_MAX;
    for(auto &e:A)
    {
        temp=0;
        for(auto &s:mp)
        {
            if(s.second<e)
            {
                temp+=s.second;
            }
            else if(s.second>e)
            {
                temp+=(s.second-e);
            }
        }
        ans=min(ans,temp);
    }
    cout<<ans<<endl;
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
