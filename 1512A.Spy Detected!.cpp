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
void solve(int n)
{
    vector<int>A;
    int temp;
    rep(i,0,n)
    {
        cin>>temp;
        A.pb(temp);
    }
    int tr=0;
    rep(i,0,3)
    {
        if(A.at(i) == A.at(0))
        {
            tr++;
        }
    }
    if(tr == 1)
    {
        cout<<1<<endl;
    }
    else
    {
        rep(i,0,n)
        {
            if(A.at(i) != A.at(0))
            {
                cout<<i+1<<endl;
            }
        }
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
