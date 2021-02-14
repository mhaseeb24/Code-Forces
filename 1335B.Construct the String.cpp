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
void solve(int n,int a,int b)
{
    int i=0;
    vector<char>ANS;
    while(n)
    {
        ANS.pb('a'+i);
        i=(i+1)%b;
        n--;
    }
    for(auto &e:ANS)
    {
        cout<<e;
    }
    cout<<endl;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    int n,a,b;
    while(t)
    {
        cin>>n>>a>>b;
        solve(n,a,b);
        t--;
    }
    return 0;
}
