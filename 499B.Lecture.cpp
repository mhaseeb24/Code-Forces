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
    int n,m,tr;
    cin>>n>>m;
    tr=m;
    vector<pair<string,string>>st;
    vector<string>ft;
    while(m)
    {
        string a,b;
        cin>>a>>b;
        st.pb(mp(a,b));
        if(a.size()>b.size())
        {
            ft.pb(b);
        }
        else
        {
            ft.pb(a);
        }
        m--;
    }
    while(n)
    {
        string temp;
        cin>>temp;
        rep(i,0,tr)
        {
            if(temp==st[i].first||temp==st[i].second)
            {
                cout<<ft.at(i)<<" ";
                break;
            }
        }
        n--;
    }
    return 0;
}
