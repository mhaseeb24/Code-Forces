#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    int temp;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(i%2==0)
        {
            if(temp%2!=0)
            {
                a++;
            }
        }
        else
        {
            if(temp%2==0)
            {
                b++;
            }
        }
    }
    if(a==b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t)
    {
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
