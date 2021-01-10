#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=0,b=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s.at(i)=='A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        cout<<"Anton";
    }
    else if(b>a)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}
