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
int Ndigit(int x)
{
    int c=0;
    while(x!=0)
    {
        c++;
        x=x/10;
    }
    return c;
}
int fnc(int tr)
{
    int a=0;
    while(tr!=0)
    {
        a=a+tr;
        tr--;
    }
    return a;
}
void solve(int m)
{
      int tr=Ndigit(m);
      int tr2=m%10;
      int ans=(tr2-1)*10;
      ans=ans+fnc(tr);
      cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int m;
        cin>>m;
        solve(m);
        t--;
    }
    return 0;
}
