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
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    ll n,temp;
    cin>>n;
    vector<ll>A;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    sort(A.begin(),A.end());
    ll ans1=A.at(n-1)-A.at(0),ans2=0;
    if(ans1==0)
    {
        for(int i=0;i<n;i++)
        {
            if(A.at(i)==A.at(0))
            {
                ans2++;
            }
        }
        ans2=(ans2*(ans2-1))/2;
        cout<<ans1<<" "<<ans2;
        return 0;
    }
    ll x=0,y=0;
    for(ll i=0;i<n;i++)
    {
        if(A.at(i)==A.at(0))
        {
            x++;
        }
        if(A.at(i)==A.at(n-1))
        {
            y++;
        }
    }
    ans2=x*y;
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}
