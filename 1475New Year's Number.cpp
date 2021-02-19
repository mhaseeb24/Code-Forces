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
    while(t)
    {
        db n;
        cin>>n;
        db b;
        for(db i=0;i*2020<=n;i++)
        {
            b=(n-(i*2020))/2021;
            if(ceil(b)==floor(b))
            {
                cout<<"YES"<<endl;
                goto LABEL;
            }
        }
        cout<<"NO"<<endl;
        LABEL:{}
        t--;
    }
    return 0;
}
