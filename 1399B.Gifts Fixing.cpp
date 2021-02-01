#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void getAB(vector<ll>&A,vector<ll>&B,int n)
{
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        B.pb(temp);
    }
}
void solve(vector<ll>&A,vector<ll>&B,int n)
{
    ll temp,sum=0;
    ll MIN_A=*min_element(A.begin(),A.end());
    ll MIN_B=*min_element(B.begin(),B.end());
    for(int i=0;i<n;i++)
    {
        ll a=A.at(i)-MIN_A;
        ll b=B.at(i)-MIN_B;
        temp=max(a,b);
        sum=sum+temp;
    }
    cout<<sum<<endl;
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    int n;
    vector<ll>A;
    vector<ll>B;
    while(T)
    {
        cin>>n;
        getAB(A,B,n);
        solve(A,B,n);
        A.clear();
        B.clear();
        T--;
    }
    return 0;
}
