#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<10)
    {
        if(n%4==0||n%7==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    if(10<=n&&n<100)
    {
        if(n%4==0||n%7==0||n%47==0||n%74==0||n%44==0||n%77==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    if(100<=n&&n<=1000)
    {
        if(n%4==0||n%7==0||n%47==0||n%74==0||n%44==0||n%77==0)
        {
            cout<<"YES";
        }
        else if(n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
