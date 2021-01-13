#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1=0,a2=0,a3=0,a4=0;
    int *p=new int[n];
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(p[i]==1)
        {
            a1++;
        }
        if(p[i]==2)
        {
            a2++;
        }
        if(p[i]==3)
        {
            a3++;
        }
        if(p[i]==4)
        {
            a4++;
        }
    }
    res=res+a4;
    if(a3>a1)
    {
        res=res+(a3-a1);
        res=res+a1;
        a1=0;
    }
    else if(a3==a1)
    {
        res=res+a3;
        a1=0;
    }
    else
    {
        res=res+a3;
        a1=a1-a3;
    }
    if(a2%2==0)
    {
        res=res+a2/2;
        if(a1==0)
        {
        }
        else if(a1%4==0)
        {
            res=res+a1/4;
        }
        else
            res=res+((a1/4)+1);
    }
    else
    {
        res=res+a2/2;
        a2=a2%2;
        if(a1<=2)
        {
            res=res+a2;
            a1=0;
        }
        else
        {
            res=res+a2;
            a1=a1-2;
            if(a1==0)
            {
                res=res;
            }
            else if (a1%4==0)
            {
                res=res+a1/4;
            }
            else
                res=res+((a1/4)+1);
        }
    }
    cout<<res;
    return 0;
}
