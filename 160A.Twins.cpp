#include<iostream>
#include<vector>
using namespace std;
void sortp(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(A[j]<A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sortp(p,n);
    int  b=0,c;
    for(int i=0;i<n;i++)
    {
        b=b+p[i];
        c=0;
        for(int j=0;j<n;j++)
        {
            c=c+p[j];
        }
        if(b>(c/2))
        {
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}
