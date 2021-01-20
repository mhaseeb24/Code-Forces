#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int len;
        cin>>len;
        string b;
        cin>>b;
        string d=b;
        string a=b;
        a.at(0)='1';
        d.at(0)=1+b.at(0);
        for(int j=1;j<len;j++)
        {
            a.at(j)='1';
            d.at(j)=b.at(j)+1;
            if(d.at(j-1)==d.at(j))
            {
                a.at(j)='0';
                d.at(j)=0+b.at(j);
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
