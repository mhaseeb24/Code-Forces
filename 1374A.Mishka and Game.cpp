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
    int n;
    cin>>n;
    int a,b,A=0,B=0;
    while(n)
    {
        cin>>a>>b;
        if(a>b)
        {
            A++;
        }
        if(b>a)
        {
            B++;
        }
        n--;
    }
    if(A>B)
    {
        cout<<"Mishka";
    }
    else if(B>A)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
