#include<iostream>
using namespace std;
int main()
{
    int n,m,w=0;
    cin>>n>>m;
    int *p=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(p[i]>m)
        {
            w=w+2;
        }
        else
        {
            w=w+1;
        }
    }
    cout<<w;
    return 0;
}
