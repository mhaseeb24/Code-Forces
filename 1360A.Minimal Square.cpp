#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int MAX,int MIN)
{
    if(2*MIN>MAX)
    {
        MIN=MIN*2;
        cout<<(MIN*MIN)<<endl;
    }
    else
    {
        cout<<(MAX*MAX)<<endl;
    }
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    int a,b;
    int MAX,MIN;
    while(T)
    {
        cin>>a>>b;
        if(a>b)
        {
            MAX=a;
            MIN=b;
        }
        else
        {
            MAX=b;
            MIN=a;
        }
        solve(MAX,MIN);
        T--;
    }
    return 0;
}
