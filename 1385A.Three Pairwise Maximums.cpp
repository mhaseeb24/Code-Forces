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
void solve(ll x,ll y,ll z)
{
    if(x == y && x == z)
    {
        cout << "YES" << endl << x << " " << y << " " << z << endl;
    }
    else if(x != y && y != z && x != z)
    {
        cout << "NO" <<endl;
    }
    else
    {
        if(x == y)
        {
            if(x > z)
            {
                cout << "YES" << endl << "1" << " " << x << " " << z << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else if(y == z)
        {
            if(y > x)
            {
                cout << "YES" << endl << "1" << " " << x << " " << z << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else
        {
            if(x > y)
            {
                cout << "YES" << endl << "1" << " " << x << " " << y << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t)
    {
        ll x,y,z;
        cin >> x >> y >> z;
        solve(x,y,z);
        t--;
    }
    return 0;
}
