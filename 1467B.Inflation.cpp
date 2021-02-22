/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    int T;
    cin>>T;
    ll n;
    long double k;
    while(T)
    {
        cin>>n>>k;
        db temp,sum1;
        db ans=(long double)(0);
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            if(i==0)
            {
                sum1=temp;
                continue;
            }
            else
            {
                ld x;
                x=temp/sum1;
                if(x>=(k/100.0))
                {
                    ld y;
                    y=ceil(temp*100.0/k)-sum1;
                    ans=ans+y;
                    sum1=sum1+temp+y;
                }
                else
                {
                    sum1=sum1+temp;
                }
            }
        }
        cout<<setprecision(12)<<ans<<endl;
        T--;
    }
    return 0;
}
