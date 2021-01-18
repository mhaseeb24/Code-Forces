#include<iostream>
using namespace std;
void dollars(int n)
{
    int s=0;
    while(n!=0)
    {
        if(n%100==0)
        {
            s++;
            n=n-100;
            continue;
        }
        if(n%20==0)
        {
            s++;
            n=n-20;
            continue;
        }
        if(n%10==0)
        {
            s++;
            n=n-10;
            continue;
        }
        if(n%5==0)
        {
            s++;
            n=n-5;
            continue;
        }
        if(n%1==0)
        {
            s++;
            n=n-1;
            continue;
        }
    }
    cout<<s;
}
int main()
{
    int n;
    cin>>n;
    dollars(n);
    return 0;
}
