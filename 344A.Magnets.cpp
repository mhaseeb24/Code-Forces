#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int *p=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        p[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
        if(p[i]==p[i-1])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
