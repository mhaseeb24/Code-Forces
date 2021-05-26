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
void solve(ll a,ll b)
{
    if(a>b)
    {
        if(a%2==0)
        {
            if(b%2==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else
        {
            if(b%2==0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
    else if(b>a)
    {
        if(a%2==0)
        {
            if(b%2==0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            if(b%2==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
    else
    {
        cout<<0<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        ll a,b;
        cin>>a>>b;
        solve(a,b);
        t--;
    }
    return 0;
}
