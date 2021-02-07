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
    int a=0,b=0,c=0,d=0;
    int i;
    for(i=n;i>=1;i--)
    {
        if(i==n)
        {
            a=a+pow(2,i);
            c++;
            continue;
        }
        if(a>b)
        {
            b=b+pow(2,i);
            d++;
            if(d==(n/2))
            {
                i--;
                while(i!=0)
                {
                    a=a+pow(2,i);
                    i--;
                }
                break;
            }
        }
        else
        {
            a=a+pow(2,i);
            c++;
            if(c==(n/2))
            {
                i--;
                while(i!=0)
                {
                    b=b+pow(2,i);
                    i--;
                }
                    break;
            }
        }
    }
    a=a-b;
    if(a<0)
    {
        a=a*-1;
    }
    cout<<a<<endl;
}
int main()
{
    int T;
    cin>>T;
    int n;
    while(T)
    {
        cin>>n;
        solve(n);
        T--;
    }
    return 0;
}
