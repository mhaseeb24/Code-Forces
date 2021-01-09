#include<bits/stdc++.h>
using namespace std;
void change(string s)
{
    int low=0,cap=0;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)>90)
        {
            low++;
        }
        else
        {
            cap++;
        }
    }
    if(cap>low)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s;
}
int main()
{
    string s;
    cin>>s;
    change(s);
    return 0;
}
