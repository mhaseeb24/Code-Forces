#include<iostream>
using namespace std;
void beautifull(int n)
{
    int a,b,c,d;
    d=n%10;
    c=(n/10)%10;
    b=(n/100)%10;
    a=(n/1000)%10;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
    {
        cout<<a<<b<<c<<d;
    }
    else
    {
        beautifull(n+1);
    }
}
int main()
{
    int n;
    cin>>n;
    beautifull(n+1);
    return 0;
}
