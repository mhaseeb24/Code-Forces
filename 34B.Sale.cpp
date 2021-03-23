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
int main()
{
    lessTime;
    int n,m,temp,sum=0;
    cin>>n>>m;
    vector<int>TV;
    rep(i,0,n)
    {
        cin>>temp;
        TV.pb(temp);
    }
    sort(TV.begin(),TV.end());
    temp=0;
    while(m)
    {
        if(TV.at(temp)>0)
        {
            break;
        }
        sum=sum+(-1*TV.at(temp++));
        m--;
    }
    cout<<sum;
    return 0;
}
