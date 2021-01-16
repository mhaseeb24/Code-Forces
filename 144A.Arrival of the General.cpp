#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int s=0,t=0;
    int max=p[0],min=p[0];
    for(int i=0;i<n;i++)
    {
        if(max<p[i])
        {
            max=p[i];
            s=i;
        }
        if(min>=p[i])
        {
            min=p[i];
            t=i;
        }
    }
    s++;
    t++;
    int res;
    if(t<s)
    {
        res=s-1;
        res=res+n-(t+1);
    }
    else
    {
        res=s-1;
        res=res+n-t;
    }
    cout<<res;
    return 0;
}
