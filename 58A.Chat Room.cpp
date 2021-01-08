#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m=0,p,q=0,r;
    int a1=0,a2=0,a3=0,a4=0,a5=0;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='h')
        {
            a1=1;
        }
        if(a1==1&&s.at(i)=='e')
        {
            a2=1;
        }
        if(a2==1&&s.at(i)=='l')
        {
            a3=1;
            m++;
            if(m==1)
            {
                p=i;
            }
        }
        if(a3==1&&s.at(i)=='o')
        {
            a4=1;
            r=i;
        }
    }
    if(a3==1&&a4==1)
    {
        for(int i=p+1;i<r;i++)
        {
            if(s.at(i)=='l')
            {
                a5=1;
            }
        }
    }
    if(a1==1&&a2==1&&a3==1&&a4==1&&a5==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
