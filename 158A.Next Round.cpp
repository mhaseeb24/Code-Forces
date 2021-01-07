#include<iostream>
using namespace std;
int main()
{
    int n,k,p,r=0;
    cin>>n>>k;
    int *x =new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    p=x[k-1];
    for(int i=0;i<n;i++)
    {
        if(x[i]>=p&&x[i]>0)
        {
            r++;
        }
    }
    cout<<r;
    return 0;
}
