#include<bits/stdc++.h>
#define ll long long int
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll n)
{
    if((n/2)%2==0)
    {
        ll sumEven=0;
        ll sumOdd=0;
        int temp;
        vector<ll>A;
        for(ll i=2;i<=n;i=i+2)
        {
            A.push_back(i);
            sumEven=sumEven+i;
        }
        for(ll i=1;i<n;i=i+2)
        {
            A.push_back(i);
            sumOdd=sumOdd+i;
            if(i==(n-1))
            {
                temp=i;
            }
        }
        temp=temp+(sumEven-sumOdd);
        A.at(n-1)=temp;
        cout<<"YES"<<endl;
        for(auto &e:A)
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    ll n;
    while(T)
    {
        cin>>n;
        solve(n);
        T--;
    }
    return 0;
}
