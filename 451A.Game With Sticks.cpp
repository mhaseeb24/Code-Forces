#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a=0;
    while((m*n)!=0)
    {
        if(a==0)
        {
            m=m-1;
            n=n-1;
            a=1;
        }
        else
        {
            m=m-1;
            n=n-1;
            a=0;
        }
    }
    if(a==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }
    return 0;
}
