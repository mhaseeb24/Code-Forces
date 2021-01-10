#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int m=0;
    int c=0;
    while(n!=0)
    {
        m=n%10;
        if(m==4||m==7)
        {
          c++;
        }
        n=n/10;
    }
    if(c==4||c==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
