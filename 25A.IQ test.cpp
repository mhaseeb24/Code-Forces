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
int main()
{
    lessTime;
    int n;
    cin>>n;
    vector<int>A;
    int temp;
    rep(i,0,n)
    {
        cin>>temp;
        A.pb(temp);
    }
    int odd=0,even=0;
    rep(i,0,3)
    {
        if(A.at(i)%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)
    {
        rep(i,0,n)
        {
            if(A.at(i)%2!=0)
            {
                cout<<i+1;
                return 0;
            }
        }
    }
    else
    {
        rep(i,0,n)
        {
            if(A.at(i)%2==0)
            {
                cout<<i+1;
                return 0;
            }
        }
    }
    return 0;
}
