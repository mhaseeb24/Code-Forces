#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T=4;
    int C=6;
    int O=8;
    int D=12;
    int I=20;
    int n;
    cin>>n;
    string s;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.at(i)=='T')
        {
            res=res+T;
        }
         if(s.at(i)=='C')
        {
            res=res+C;
        }
         if(s.at(i)=='O')
        {
            res=res+O;
        }
         if(s.at(i)=='D')
        {
            res=res+D;
        }
         if(s.at(i)=='I')
        {
            res=res+I;
        }
    }
    cout<<res;
    return 0;
}
