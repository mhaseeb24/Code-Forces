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
void solve(int n)
{
    int temp1,maxI=0;
    vector<int>A;
    for(int i=0;i<n;i++)
    {
        cin>>temp1;
        A.pb(temp1);
    }
    for(int i=0;i<n;i++)
    {
        vector<int>temp=A;
        for(int j=i;j<n;j++)
        {
            int sum;
            temp.at(j)=1-A.at(j);
            sum=accumulate(temp.begin(),temp.end(),0);
            maxI=max(maxI,sum);
        }
    }
    cout<<maxI<<endl;
}
int main()
{
    lessTime;
    int n;
    cin>>n;
    solve(n);
    return 0;
}
