#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int a,int b)
{
    int ans;
    ans=a;
    int rem;
    while(a>=b)
    {
        rem=a%b;
        a=a/b;
        ans=ans+a;
        a=a+rem;
    }
    cout<<ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    solve(a,b);
    return 0;
}
