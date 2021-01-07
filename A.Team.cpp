#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m,p=0;
    int a[3];
    for(int i=0;i<n;i++)
    {
        m=0;
        a[0]=0;
        a[1]=0;
        a[2]=0;
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]==1)
        {
            m++;
        }
        if(a[1]==1)
        {
            m++;
        }
        if(a[2]==1)
        {
            m++;
        }
        if(m>1)
        {
            p++;
        }
    }
    cout<<p;
    return 0;
}
