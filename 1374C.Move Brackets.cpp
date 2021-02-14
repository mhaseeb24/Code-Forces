/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    string s;
    cin>>s;
    int ch=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s.at(i)=='(')
        {
            ch++;
        }
        else
        {
            ch--;
            if(ch==-1)
            {
                ans++;
                ch++;
            }
        }
    }
    cout<<ans<<endl;
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
