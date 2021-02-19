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
int main()
{
    lessTime;
    int t;
    cin>>t;
    double x;
    while(t)
    {
        cin>>x;
        double a=1,b;
        while(a*a*a<=x)
        {
            b=x-(a*a*a);
            if(b==0)
            {
                cout<<"NO"<<endl;
                goto LABEL;
            }
            b=cbrt(b);
            if(ceil(b)==floor(b))
            {
                cout<<"YES"<<endl;
                goto LABEL;
            }
            a++;
        }
        cout<<"NO"<<endl;
        LABEL:{}
        t--;
    }
    return 0;
}
