/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int b_srch(ll t,vector<ll> &A)
{
    int c=2;
    ll mid,l=0,r=(A.size()-1);
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(t==A.at(mid))
        {
            return mid+1;
        }
        else if(t>A.at(mid))
        {
            l=mid+1;
            c=0;
        }
        else
        {
            r=mid-1;
            c=1;
        }
    }
    if(c==0)
    {
        return mid+2;
    }
    else
    {
        return mid+1;
    }
}
int main()
{
    lessTime;
    ll n,m;
    cin>>n;
    vector<ll>TR;
    ll temp;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        if(i==0)
        {
            TR.pb(temp);
            continue;
        }
        temp+=TR.at(i-1);
        TR.pb(temp);
    }
    cin>>m;
    while(m--)
    {
        ll t;
        cin>>t;
        cout<<b_srch(t,TR)<<endl;
    }
    return 0;
}
