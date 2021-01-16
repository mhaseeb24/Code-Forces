#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int a=0,b=0;
    for(int i=0;i<3;i++)
    {
        if(p[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(p[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}
