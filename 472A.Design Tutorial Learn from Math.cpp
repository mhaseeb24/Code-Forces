#include<bits/stdc++.h>
using namespace std;
bool isPrime(int t)
{
    if(t<=1)
    {
        return false;
    }
    if(t<=3)
    {
        return true;
    }
    if(t%2==0||t%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=t;i=i+6)
    {
        if(t%i==0||t%(i+2)==0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cin>>n;
    int a,b;
    a=n-2;
    b=2;
    while(isPrime(a)||isPrime(b))
    {
        a--;
        b++;
    }
    cout<<a<<" "<<b;
    return 0;
}
