#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    int m=0,p=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        p=p-a+b;
        if(p>m)
        {
            m=p;
        }
    }
    cout<<m;
    return 0;
}
