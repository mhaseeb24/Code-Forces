#include<bits/stdc++.h>
using namespace std;
void Check(string s1)
{
    int m=0,n=0,r=0;
    for(int i=0;i<s1.length();i++)
    {

        if(s1.at(i)=='0')
        {
            m++;
            n=0;
            if(m==7)
            {
                r=1;
            }
        }
        if(s1.at(i)=='1')
        {
            n++;
            m=0;
            if(n==7)
            {
                r=1;
            }
        }
    }
    if(r==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
int main()
{
    string s;
    cin>>s;
    Check(s);
    return 0;
}
