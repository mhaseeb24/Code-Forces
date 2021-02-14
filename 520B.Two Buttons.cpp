/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n,int m)
{
    if(n>=m)
    {
        cout<<n-m;
    }
    else
    {
        int ans=0;
        while(n<m)
        {
            if(m%2==0)
            {
                m=m/2;
                ans++;
            }
            else
            {
                m=m+1;
                ans++;
            }
        }
        ans=ans+(n-m);
        cout<<ans;
    }
}
int main()
{
    lessTime;
    int n,m;
    cin>>n>>m;
    solve(n,m);
    return 0;
}
