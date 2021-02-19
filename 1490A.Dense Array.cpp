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
void solve(int n)
{
    vector<int>A;
    int temp,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    int mx,mn;
    for(int i=0,j=1;j<n;i++,j++)
    {
        mx=max(A.at(i),A.at(j));
        mn=min(A.at(i),A.at(j));
        while(2*mn<mx)
        {
            ans++;
            mn=mn*2;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    int n;
    while(t)
    {
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
