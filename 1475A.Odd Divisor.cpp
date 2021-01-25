#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x;
    cin>>t;
    while(t)
    {
        cin>>x;
        if(x==2||x==1)
        {
            cout<<"NO"<<endl;
        }
        else if(x%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            while(x%2==0)
            {
                x=x/2;
            }
            if(x==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        t--;
    }
    return 0;
}
