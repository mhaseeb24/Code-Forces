#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>b;
        a=b;
        if(b.size()==2)
        {
            cout<<a<<endl;
            continue;
        }
        else
        {
            int i=0,j=0;
            for(i=0;i<b.size()-1;i=i+2,j++)
            {
                a.at(j)=b.at(i);
            }
            a.at(j)=b.at(b.size()-1);
            a.erase(j+1);
            cout<<a<<endl;
        }
    }
    return 0;
}
