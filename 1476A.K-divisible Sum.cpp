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
    int t;
    cin>>t;
    db n,k,temp;
    while(t)
    {
        cin>>n>>k;
        if(n>k)
        {
            if(int(n)%int(k)==0)
            {
                temp=(n/k)-1;
            }
            else
            {
                temp=n/k;
            }
            k=k+temp*k;
            cout<<setprecision(12)<<ceil(k/n)<<endl;
        }
        else
        {
            cout<<setprecision(12)<<ceil(k/n)<<endl;
        }
        t--;
    }
    return 0;
}
