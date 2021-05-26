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
void solve(int a[],string s)
{
    int cal=0;
    rep(i,0,s.length())
    {
        if(s.at(i)=='1')
        {
            cal=cal+a[0];
        }
        else if(s.at(i)=='2')
        {
            cal=cal+a[1];
        }
        else if(s.at(i)=='3')
        {
            cal=cal+a[2];
        }
        else
        {
            cal=cal+a[3];
        }
    }
    cout<<cal;
}
int main()
{
    int a[4];
    string s;
    rep(i,0,4)
    {
        cin>>a[i];
    }
    cin>>s;
    solve(a,s);
    return 0;
}
