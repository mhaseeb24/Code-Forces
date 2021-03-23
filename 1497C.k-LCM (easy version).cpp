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
void solve(ll n,ll k)
{
    if(n%2==0)
    {
        if((n/2)%2==0)
        {
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }
        else
        {
            cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<2<<endl;
        }
    }
    else
    {
        cout<<n/2<<" "<<n/2<<" "<<n-(2*(n/2))<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll n,k;
        cin>>n>>k;
        solve(n,k);
        t--;
    }
    return 0;
}
