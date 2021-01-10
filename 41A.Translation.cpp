#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int i,j,n=0;
    cin>>a>>b;
    j=a.length()-1;
    if(a.length()==b.length())
    {
        for(i=0;i<a.length();i++)
            {
                if(a.at(i)==b.at(j))
                {
                    n++;
                }
                j--;
            }
        if(n==a.length())
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
