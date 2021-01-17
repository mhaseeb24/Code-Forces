#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    list<char>l1;
    for(int i=0;i<n;i++)
    {
        l1.push_back(s.at(i));
    }
    l1.sort();
    l1.unique();
    if(l1.size()==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
