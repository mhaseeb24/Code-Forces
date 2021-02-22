/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n)
{
    vector<ll>A;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    if(A.size()==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(A.at(0)!=0)
    {
        A.at(1)+=A.at(0);
        A.at(0)=0;
    }
    ll i;
    for(i=1;i<n;i++)
    {
        if(A.at(i-1)>=A.at(i))
        {
            cout<<"NO"<<endl;
            goto LABEL;
        }
        if(i==(n-1))
        {
            break;
        }
        else
        {
            if(A.at(i)>i)
            {
                A.at(i+1)=A.at(i+1)+(A.at(i)-i);
            }
            A.at(i)=i;
        }
    }
    cout<<"YES"<<endl;
    LABEL:{}
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        ll n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
