#include<bits/stdc++.h>
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool LCheck(int n,int d)
{
    while(n!=0)
    {
        if(n%10==d)
        {
            return true;
        }
        else
        {
            n=n/10;
        }
    }
    return false;
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    int q,d;
    while(t--)
    {
        cin>>q>>d;
        int temp;
        for(int i=0;i<q;i++)
        {
            cin>>temp;
            if(temp%d==0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(temp<d)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                int c=temp/d;
                int x=temp-c*d;
                while(x<=temp)
                {
                    if(LCheck(x,d))
                    {
                        cout<<"YES"<<endl;
                        goto Label;
                    }
                    else
                    {
                        x=x+d;
                    }
                }
                cout<<"NO"<<endl;
                Label:{}
            }
        }
    }
    return 0;
}
