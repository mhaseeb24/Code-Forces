#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int i,j;
    i=n/a;
    j=m/a;
    if(n%a!=0)
    {
        i++;
    }
    if(m%a!=0)
    {
        j++;
    }
    cout<<i*j;

    return 0;
}
