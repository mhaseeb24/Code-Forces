#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n,int m)
{
    int ans=0,c=0;
    while(n!=0)
    {
        ans++;
        n--;
        c++;
        if(c%m==0)
        {
            n++;
        }
    }
    cout<<ans;
}
int main()
{
    lessTime;
    int n,m;
    cin>>n>>m;
    solve(n,m);
    return 0;
}
