#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x;
    while(t)
    {
        cin>>x;
        if(x<4040)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(x%2020==0)
            {
                cout<<"YES"<<endl;
            }
            else if(x%2021==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                for(int i=1;i<x/2020;i++)
                {
                    for(int j=1;j<x%2021;j++)
                    {
                        if((i*2020)+(j*2021)==x)
                        {
                            cout<<"YES"<<endl;
                            goto Label;
                        }
                    }
                }
                cout<<"NO"<<endl;
            }
        }
        Label:
        t--;
    }
    return 0;
}
