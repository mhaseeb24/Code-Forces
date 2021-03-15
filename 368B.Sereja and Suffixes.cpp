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
void solve(int n,int m)
{
    int temp;
    vector<pair<int,int>>A;
    rep(i,0,n)
    {
        cin>>temp;
        A.pb(mp(temp,0));
    }
    unordered_set<int>SS;
    itr(i,n-1,0)
    {
        SS.insert(A[i].first);
        A[i].second=SS.size();
    }

    while(m)
    {
        cin>>temp;
        cout<<A[temp-1].second<<endl;
        m--;
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
