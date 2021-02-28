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
void solve(int n,int m)
{
    if(n<m)
    {
        cout<<-1;
    }
    else
    {
        int z=ceil((float)n/(float)2);
        if(z%m==0)
        {
            cout<<ceil((float)n/(float)2);
        }
        else
        {
            int x=m+(n/2);
            x=(x/m)*m;
            cout<<x;
        }
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
