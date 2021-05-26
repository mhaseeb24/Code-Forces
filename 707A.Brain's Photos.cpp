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
    int m,n;
    char s;
    cin >> m >> n;
    rep(i,0,m*n)
    {
        cin>>s;
        if(s == 'C' || s == 'M' || s == 'Y')
        {
            cout<<"#Color"<<endl;
            return 0;
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}
