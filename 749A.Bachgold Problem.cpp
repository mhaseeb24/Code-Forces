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
    int n,m;
    cin>>n;
    if(n%2==0)
    {
        m=n/2;
        cout<<m<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        m=n/2;
        cout<<m<<endl;
        for(int i=0;i<m-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}
