#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,u;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='Y'||s.at(i)=='y'||s.at(i)=='A'||s.at(i)=='a'||s.at(i)=='E'||s.at(i)=='e'||s.at(i)=='I'||s.at(i)=='i'||s.at(i)=='O'||s.at(i)=='o'||s.at(i)=='U'||s.at(i)=='u')
        {
            continue;
        }
        t.push_back(s.at(i));
    }
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    cout<<".";
    for(int i=0;i<t.length()-1;i++)
    {
        cout<<t.at(i)<<".";
    }
    cout<<t.at(t.length()-1);
    return 0;
}
