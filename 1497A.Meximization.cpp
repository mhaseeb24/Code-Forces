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
    int a[101]={0};
    int temp;
    rep(i,0,n)
    {
        cin>>temp;
        a[temp]++;
    }
    int c=1;
    while(c!=0){
    c=0;
    rep(i,0,101)
    {
        if(a[i]!=0)
        {
            cout<<i<<" ";
            c=1;
            a[i]--;
        }
    }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        solve(n);
        t--;
    }
}
