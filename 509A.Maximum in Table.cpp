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
    int n;
    cin>>n;
    int arr[n][n];
    rep(i,0,n)
    {
        arr[0][i]=1;
        arr[i][0]=1;
    }
    rep(i,1,n)
    {
        rep(j,1,n)
        {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[n-1][n-1];
    return 0;
}
