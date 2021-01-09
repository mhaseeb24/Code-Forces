#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s.at(i)=='B'&&s.at(i+1)=='G')
            {
                char temp;
                temp=s.at(i);
                s.at(i)=s.at(i+1);
                s.at(i+1)=temp;
                i=i+1;
            }
        }

        t--;
    }
    cout<<s;
    return 0;
}
