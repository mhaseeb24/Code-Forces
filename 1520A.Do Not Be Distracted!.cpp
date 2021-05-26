/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#pragma GCC optimize("O2")
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
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        list<char>ST;
        rep(i,0,s.length())
        {
            ST.pb(s.at(i));
        }
        ST.unique();
        int hs[200]={0};
        for(auto &e:ST)
        {
            if(hs[e]!=0)
            {
                cout<<"NO"<<endl;
                goto label;
            }
            hs[e]=-1;
        }
        cout<<"YES"<<endl;
        label:{}
        t--;
    }
}
