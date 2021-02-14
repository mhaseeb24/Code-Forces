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
void solve(float a)
{
    a=180-a;
    a=360/a;
    if(ceil(a)==floor(a))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    float a;
    while(t)
    {
        cin>>a;
        solve(a);
        t--;
    }
    return 0;
}
