/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    string s;
    cin>>s;
    int num_1=0;
    int num_0=0;
    for(int i=0;i<n;i++)
    {
        if(s.at(i)=='0')
        {
            num_0++;
        }
        else
        {
            num_1++;
        }
    }
    int manI=min(num_0,num_1);
    cout<<n-(2*manI);
}
int main()
{
    lessTime;
    int n;
    cin>>n;
    solve(n);
    return 0;
}
