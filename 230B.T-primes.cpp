#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long int t)
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
void tPrime(long long int x)
{
    double t=sqrt(x);
    if(t-int(t)==0)
    {
        if(isPrime(t))
        {
            cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        long long int x;
        cin>>x;
        tPrime(x);
        n--;
    }
    return 0;
}
