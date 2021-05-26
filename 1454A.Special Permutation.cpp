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
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        rep(i,2,n+1)
        {
            cout<<i<<" ";

        }
        cout<<"1"<<endl;
        t--;
    }
    return 0;
}
