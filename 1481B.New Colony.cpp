#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n,ll k)
{
    vector<ll>A;
    ll temp,i=0;
    int c;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    while(k!=0&&i!=n-1)
    {
        if(A.at(i)>=A.at(i+1))
        {
            i++;
            c=1;
        }
        else
        {
            A.at(i)++;
            c=0;
            k--;
        }
        if(k==0)
        {
            temp=i;
            break;
        }
        else if(c==0)
        {
            i=0;
        }
    }
    if(temp==n-1||i==(n-1))
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<temp+1<<endl;
    }
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    ll n,k;
    while(T--)
    {
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}
