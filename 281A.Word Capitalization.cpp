#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (int(s.at(0))>96)
    {
        s.at(0)=(char)(int(s.at(0))-32);
    }
    cout<<s;
    return 0;
}
