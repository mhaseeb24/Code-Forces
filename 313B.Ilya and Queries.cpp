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
void solve(string s)
{
    int *a=new int[s.size()];
    a[0]=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i])
        {
            a[i]=1+a[i-1];
        }
        else
        {
            a[i]=a[i-1];
        }
    }
    int m;
    cin>>m;
    while(m)
    {
        int c,d;
        cin>>c>>d;
        c--;
        d--;
        cout<<a[d]-a[c]<<endl;
        m--;
    }
}
int main()
{
    lessTime;
    string s;
    cin>>s;
    solve(s);
    return 0;
}
