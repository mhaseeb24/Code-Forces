#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string st=s;
    st.at(0)=toupper(st.at(0));
    int r=0;
    for(int i=0;i<st.length();i++)
    {
        if(st.at(i)>64&&st.at(i)<91)
        {
            r++;
        }
    }
    if(r==s.length())
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)>64&&s.at(i)<91)
            {
                s.at(i)=tolower(s.at(i));
            }
            else
            {
                s.at(i)=toupper(s.at(i));
            }
        }
    }
    cout<<s;
    return 0;
}
