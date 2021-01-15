#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *l=new int[n];
    for(int i=0;i<n;i++)
    {
        l[i]=0;
    }
    int p,q;
    cin>>p;
    int *g1=new int[p];
    for(int i=0;i<p;i++)
    {
        cin>>g1[i];
        l[g1[i]-1]++;
    }
    cin>>q;
    int *g2=new int[q];
    for(int i=0;i<q;i++)
    {
        cin>>g2[i];
        l[g2[i]-1]++;
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(l[i]!=0)
        {
            m++;
        }
    }
    if(m==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
