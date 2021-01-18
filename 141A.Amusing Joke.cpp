#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,p,r;
    cin>>s>>p>>r;
    int len=26;
    int *pt=new int[len];
    for(int i=0;i<len;i++)
    {
        pt[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        pt[s.at(i)-65]++;
    }
    for(int i=0;i<p.length();i++)
    {
        pt[p.at(i)-65]++;
    }
    for(int i=0;i<r.length();i++)
    {
        pt[r.at(i)-65]--;
    }
    for(int i=0;i<len;i++)
    {
        if(pt[i]!=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
