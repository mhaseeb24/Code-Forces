#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    std::list<int>l1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        l1.push_back(x);
    }
    l1.sort();
    for(const auto &e:l1)
    {
        cout<<e<<" ";
    }
    return 0;
}
