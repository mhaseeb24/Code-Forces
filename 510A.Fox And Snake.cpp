#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
            a++;
            cout<<endl;
            continue;
        }
        if(a%2!=0)
        {
            for(int j=0;j<m-1;j++)
            {
                cout<<".";
            }
            cout<<"#"<<endl;
        }
        else
        {
            cout<<"#";
            for(int j=0;j<m-1;j++)
            {
                cout<<".";
            }
            cout<<endl;
        }
    }
    return 0;
}
