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
void solve(int n,int k)
{
    vector<int>A;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
    int tr;
    int sum=0;
    pair<int,int>minI=mp(INT_MAX,0);
    int c=0;
    int p=0,i=0;
    for(i=0;i<n;i++)
    {
        if(i<k)
        {
            sum+=A.at(i);
        }
        else
        {
            tr=A.at(c++);
            if(sum<minI.first)
            {
                minI.first=sum;
                minI.second=i;
            }
            sum-=tr;
            sum+=A.at(i);
            p=1;
        }
    }
    if(p==1&&sum<minI.first)
    {
        minI.first=sum;
        minI.second=i;
    }
    if(p==0)
    {
        cout<<1<<endl;
        return;
    }
    cout<<minI.second-k+1<<endl;
}
int main()
{
    lessTime;
    int n,k;
    cin>>n>>k;
    solve(n,k);
    return 0;
}
