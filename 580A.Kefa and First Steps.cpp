#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=0;
    int *p=new int[n];
    for (int i=0;i<n;i++)
    {
        cin>>p[i];
        if(i==0)
        {
            a++;
            b++;
        }
        else
        {
            if(p[i]>=p[i-1])
            {
                a++;
                b=max(b,a);
            }
            else
            {
                a=0;
                b=max(b,a);
                a=1;
            }
        }
    }
    cout<<b;
return 0;
}
