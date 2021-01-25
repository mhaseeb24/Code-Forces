#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t)
    {
        int temp;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            t--;
            continue;
        }
        else if(a<b)
        {
            temp=b-a;
            if(temp%10!=0)
            {
                temp=temp/10;
                temp++;
            }
            else
            {
                temp=temp/10;
            }
        }
        else
        {
            temp=a-b;
            if(temp%10!=0)
            {
                temp=temp/10;
                temp++;
            }
            else
            {
                temp=temp/10;
            }
        }
        cout<<temp<<endl;
        t--;
    }
    return 0;
}

