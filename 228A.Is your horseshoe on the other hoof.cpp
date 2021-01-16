#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int res=0;
    if(s1==s2)
    {
        res++;
        s2=-1;
    }
    if(s1==s3)
    {
        res++;
        s3=-2;
    }
    if(s1==s4)
    {
        res++;
        s4=-3;
    }
    if(s2==s3)
    {
        res++;
        s3=-4;
    }
    if(s2==s4)
    {
        s4=-5;
        res++;
    }
    if(s3==s4)
    {
        s4=-6;
        res++;
    }
    cout<<res;
    return 0;
}
