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
int toBinary(int n)
{
    int t=0;
    vector<int>temp;
    while(n!=0)
    {
        if(n%2==1)
        {
            t++;
        }
        temp.pb(n%2);
        n=n/2;
    }
    return t;
}
void solve(int n,int m,int k)
{
    vector<int>PL;
    int temp,ans=0,temp2;
    rep(i,0,m+1)
    {
        cin>>temp;
        PL.pb(temp);
    }
    rep(i,0,m)
    {
        temp=PL.at(i)^PL.at(m);
        temp2=toBinary(temp);
        if(temp2<=k)
        {
            ans++;
        }
    }
    cout<<ans;
}
int main()
{
    lessTime;
    int n,m,k;
    cin>>n>>m>>k;
    solve(n,m,k);
    return 0;
}
