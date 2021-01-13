#include<iostream>
#include<math.h>
using namespace std;
long long int f(long long int n)
{
    long long int sum;
    if(n%2==0)
    {
        sum=n/2;
    }
    else
    {
        sum=(-1*(n+1))/2;
    }
    return sum;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
