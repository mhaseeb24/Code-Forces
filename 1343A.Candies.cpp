#include<bits/stdc++.h>
#define ll long long int
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n)
{
    ll x;
    ll k=3;
    do
    {
        x=n/((ll)pow(2,k-1)-1);
        if((n%((ll)pow(2,k-1)-1)!=0)==0)
        {
            break;
        }
        if((n%((ll)pow(2,k)-1)!=0)==0)
            {
                 x=n/((ll)pow(2,k)-1);
                 break;
            }
        k++;
    }
    while((n%((ll)pow(2,k-1)-1)!=0));
    cout<<x<<endl;
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}
