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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define itr(i,a,b) for(int i=a;i>=b;i--)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    vector<pair<int,int>>A;
    int a,b;
    rep(i,0,n)
    {
        cin>>a>>b;
        A.pb(mp(a,b));
    }
    vector<int>delay;
    rep(i,0,n)
    {
        cin>>a;
        delay.pb(a);
    }
    int res=0;
    rep(i,0,n)
    {
        if(i==0)
        {
            res=delay.at(i)+A[i].first;
            if(n==1)
            {
                break;
            }
            res+=ceil(((float)A[i].second-(float)A[i].first)/(float)2);
            if(res<A[i].second)
            {
                res+=(A[i].second-res);
            }
            continue;
        }
        if(i==n-1)
        {
            res+=A[i].first-A[i-1].second+delay.at(i);
            break;
        }
        res+=A[i].first-A[i-1].second+delay.at(i);
        res+=ceil(((float)A[i].second-(float)A[i].first)/(float)2);
        if(res<A[i].second)
        {
            res+=(A[i].second-res);
        }
    }
    cout<<res<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}

