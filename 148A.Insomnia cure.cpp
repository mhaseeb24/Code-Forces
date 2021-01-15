#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,n,m=0;
    cin>>a>>b>>c>>d;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=0;
    }
    for(int i=a-1;i<n;i=i+a)
    {
        p[i]--;
    }
    for(int i=b-1;i<n;i=i+b)
    {
        p[i]--;
    }
    for(int i=c-1;i<n;i=i+c)
    {
        p[i]--;
    }
    for(int i=d-1;i<n;i=i+d)
    {
        p[i]--;
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]==0)
        {
            m++;
        }
    }
    cout<<n-m;
    return 0;
}
