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
void solve(vector<ll>arr,ll n)
{
    vector<ll>tr;
    for(int i=1;i<n;i++)
    {
        if(arr.at(i-1)>arr.at(i))
        {
            tr.pb(i-1);
            tr.pb(i);
        }
    }
    vector<ll>temp;
    temp=arr;
    sort(temp.begin(),temp.end());
    if(temp==arr)
    {
        cout<<"yes"<<endl<<1<<" "<<1;
        return;
    }
    reverse(arr.begin()+tr.at(0),arr.begin()+tr.at(tr.size()-1)+1);
    if(temp==arr)
    {
        cout<<"yes"<<endl;
        cout<<tr.at(0)+1<<" "<<tr.at(tr.size()-1)+1;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
void get_arr(vector<ll> &arr,ll n)
{
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.pb(temp);
    }
}
int main()
{
    lessTime;
    ll n;
    cin>>n;
    vector<ll>arr;
    get_arr(arr,n);
    solve(arr,n);
    return 0;
}
