#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n,int t)
{
    if(t==10&&n==1)
    {
        cout<<-1;
    }
    else
    {
        vector<int>ANS;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(t==10)
                {
                    ANS.pb(1);
                }
                else
                {
                    ANS.pb(t);
                }
            }
            else
            {
                ANS.pb(0);
            }
        }
        for(auto &e:ANS)
            {
                cout<<e;
            }
    }
}
int main()
{
    lessTime;
    int n,t;
    cin>>n>>t;
    solve(n,t);
    return 0;
}
