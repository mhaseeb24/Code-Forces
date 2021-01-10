#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='H'||s.at(i)=='Q'||s.at(i)=='9')
        {
            n++;
        }
    }
    if(n>0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
