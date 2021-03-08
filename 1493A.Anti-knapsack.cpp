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
    int m=0;
    vector<int>A;
    for(int i=1;i<=n;i++)
    {
        if(i>k)
        {
            A.pb(i);
            m++;
            continue;
        }
        if(i!=k)
        {
            for(int j=i;j<k;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(i+j==k)
                {
                    goto label;
                }
            }
            A.pb(i);
            m++;
            label:{}
        }
    }
    cout<<m<<endl;
    for(auto &e:A)
    {
        cout<<e<<" ";
    }
    if(A.size()==0)
    {
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int n,k;
        cin>>n>>k;
        solve(n,k);
        t--;
    }
    return 0;
}
