#include<bits/stdc++.h>
#define ll long long int
#define db double
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n,ll m,ll a,ll b)
{
    ll x;
    x=b/m;
    ll sum=0;
    if(x<a)
    {
        if(m>n)
        {
            if(a*n<b)
            {
                sum=sum+a*n;
            }
            else
            {
                sum=sum+b;
            }
        }
        else
        {
            ll c=n/m;
            if(n%m==0)
            {
                sum=sum+b*c;
            }
            else
            {
                n=n-c*m;
                sum=sum+b*c;
                if(b>a)
                {
                    sum=sum+a*n;
                }
                else
                {
                    sum=sum+b;
                }
            }
        }
    }
    else
    {
       sum=sum+a*n;
    }
    cout<<setprecision(15)<<sum<<endl;
}
int main()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    solve(n,m,a,b);
    return 0;
}
