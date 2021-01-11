#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[100],B[100];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        B[A[i]]=i+1;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<B[i]<<" ";
    }
    return 0;
}
