#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    string s;
    cin>>s;
    std::list<char>l1;
    for(int i=0;i<s.length();i=i+2)
    {
        l1.push_back(s.at(i));
    }
    l1.sort();
    int d=l1.size()-2;
    for(const auto &e:l1)
    {
        cout<<e;
        if(d>=0)
        {
            cout<<"+";
            d--;
        }
    }
    return 0;
}
