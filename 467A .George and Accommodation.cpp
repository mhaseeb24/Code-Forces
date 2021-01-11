#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,r=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b-a>=2)
        {
            r++;
        }
    }
    cout<<r;
    return 0;
}
