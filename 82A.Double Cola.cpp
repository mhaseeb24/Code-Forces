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
#define F <<endl
using namespace std;
void solve(ll n)
{
    int i=5,j=0,tr=5;
    vector<string>names={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(i<n)
    {
        tr=tr*2;
        j=i;
        i=i+tr;
    }
    float m=i-j;
    n=n-j;
    float x=ceil(((float)n/m)*5);
    cout<<names[x-1];
}
int main()
{
    lessTime;
    ll n;
    cin>>n;
    solve(n);
    return 0;
}
