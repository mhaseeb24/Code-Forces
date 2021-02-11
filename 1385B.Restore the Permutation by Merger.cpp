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
    vector<int>Sol;
    int hashL[51]={0};
    int temp;
    for(int i=0;i<2*n;i++)
    {
        cin>>temp;
        if(hashL[temp]==0)
        {
            hashL[temp]=1;
            Sol.pb(temp);
        }
    }
    for(auto &e:Sol)
    {
        cout<<e<<" ";
    }
    cout<<endl;
}
int main()
{
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
