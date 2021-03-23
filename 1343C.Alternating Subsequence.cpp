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
    vector<ll>A;
    ll temp;
    rep(i,0,n)
    {
        cin>>temp;
        A.pb(temp);
    }
    ll sum=0,maxI=0,minI=LLONG_MIN;
    rep(i,0,n)
    {
        if(A.at(i)<0)
        {
            sum=sum+maxI;
            maxI=0;
            minI=max(minI,A.at(i));
        }
        else
        {
            maxI=max(maxI,A.at(i));
            if(minI!=LLONG_MIN)
            {
                sum=sum+minI;
            }
            minI=LLONG_MIN;
        }
    }
    sum=sum+maxI;
    if(minI!=LLONG_MIN)
    {
        sum=sum+minI;
    }
    cout<<sum<<endl;
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
