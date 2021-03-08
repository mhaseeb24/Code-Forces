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
int main()
{
    lessTime;
    int n;
    cin>>n;
    int x=0,y=0;
    string s,t,temp;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cin>>s;
            x++;
            continue;
        }
        cin>>temp;
        if(temp==s)
        {
            x++;
        }
        else
        {
            t=temp;
            y++;
        }
    }
    if(x>y)
    {
        cout<<s;
    }
    else
    {
        cout<<t;
    }
    return 0;
}
