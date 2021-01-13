#include<iostream>
using namespace std;
void eh(int n)
{
    int a=0;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(p[i]==1)
        {
            a++;
        }
    }
    if(a>0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}
int main()
{
    int n;
    cin>>n;
    eh(n);
    return 0;
}
