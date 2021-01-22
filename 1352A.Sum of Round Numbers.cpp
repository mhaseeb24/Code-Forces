#include<bits/stdc++.h>
using namespace std;
void digits(int n)
{
    vector<int>d1;
    int s=0;
    int t=1;
    while(n!=0)
    {
        t=t*10;
        if(n%10!=0)
        {
            s++;
        }
        d1.push_back(n%10);
        n=n/10;
    }
    t=t/10;
    cout<<s<<endl;
    for(int i=d1.size()-1;i>=0;i--)
    {
        if(i==0&&d1.at(i)!=0)
        {
            cout<<d1.at(i)<<" ";
            t=t/10;;
            continue;
        }
        if(d1.at(i)==0)
        {
            t=t/10;
        }
        else
        {
            cout<<d1.at(i)*t<<" ";
            t=t/10;
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        digits(n);
        t--;
    }
    return 0;
}
