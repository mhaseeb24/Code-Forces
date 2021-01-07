#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    std::list<char>l1;
    for(int i=0;i<s.length();i++)
    {
        l1.push_back(s.at(i));
    }
    l1.unique();
    n=n-l1.size();
    cout<<n;
    return 0;
}
