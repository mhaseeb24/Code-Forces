#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int n=0;
    string s;
    for(int i=0;i<x;i++)
    {
        cin>>s;
        if(s.at(1)=='-')
        {
            n--;
        }
        if(s.at(1)=='+')
        {
            n++;
        }
        s='0';
    }
    cout<<n;
    return 0;
}
