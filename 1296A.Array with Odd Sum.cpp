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
void solve(int n)
{
    int temp;
    int odd=0,even=0;
    rep(i,0,n)
    {
        cin>>temp;
        if(temp%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(odd%2==0 && odd!=0)
    {
        if(even>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(odd==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
