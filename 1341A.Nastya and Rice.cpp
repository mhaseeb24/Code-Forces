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
    int t;
    cin>>t;
    while(t)
    {
        int n,a,b,c,d;
        int tr_1,tr_2,x,y;
        cin>>n>>a>>b>>c>>d;
        tr_1=c+d;
        tr_2=c-d;
        x=n*(a+b);
        y=n*(a-b);
        if(tr_2>x)
        {
            cout<<"NO"<<endl;
        }
        else if(y>tr_1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        t--;
    }
    return 0;
}
