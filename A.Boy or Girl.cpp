#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    string s;
    cin>>s;
    std::set<char>A;
    for(int i=0;i<s.length();i++)
    {
        A.insert(s.at(i));
    }
    int n=A.size();
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
