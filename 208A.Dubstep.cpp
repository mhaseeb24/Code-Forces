#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=0,m=0;
    for(int i=0;i<s.length();i++)
    {
        if(i!=s.length()-1&&i!=s.length()-2&&s.at(i)=='W'&&s.at(i+1)=='U'&&s.at(i+2)=='B')
        {
            i=i+2;
            /*if(n==0)
            {
                n++;
                continue;
            }*/
            if(m==0)
            {
                cout<<" ";
                m++;
            }
        }
        else
            {
                m=0;
                cout<<s.at(i);
            }
    }
    return 0;
}
