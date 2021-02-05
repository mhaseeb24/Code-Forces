#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll x,ll y,ll n)
{
    ll rem=n%x;
    if(rem==y)
    {
        cout<<n<<endl;
    }
    else if(rem<y)
    {
        n=n-rem;
        n=n-(x-y);
        cout<<n<<endl;
    }
    else
    {
        n=n-(rem-y);
        cout<<n<<endl;
    }
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    ll x,y,n;
    while(T)
    {
        cin>>x>>y>>n;
        solve(x,y,n);
        T--;
    }
    return 0;
}
