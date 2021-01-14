#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res;
    int result=0;
    res=(a+b)+c;
    result=max(result,res);
    res=a+(b+c);
    result=max(result,res);
    res=a*(b*c);
    result=max(result,res);
    res=(a*b)*c;
    result=max(result,res);
    res=a*(b+c);
    result=max(result,res);
    res=(a*b)+c;
    result=max(result,res);
    res=a+(b*c);
    result=max(result,res);
    res=(a+b)*c;
    result=max(result,res);
    cout<<result;
    return 0;
}

