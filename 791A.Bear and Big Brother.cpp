#include<iostream>
using namespace std;
int years(int a,int b)
{
    int n=0;
    while(a<=b)
    {
        a=3*a;
        b=b*2;
        n++;
    }
    return n;
}
int main()
{
    int a,b,n;
    cin>>a>>b;
    n=years(a,b);
    cout<<n;
    return 0;
}
