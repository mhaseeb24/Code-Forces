#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    std::list<char>l1;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)>=97&&s.at(i)<=122)
        {
            l1.push_back(s.at(i));
        }
    }
    l1.sort();
    l1.unique();
    cout<<l1.size();
    return 0;
}
