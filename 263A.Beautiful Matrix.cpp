#include<iostream>
using namespace std;
int main()
{
    int i,j,n,p,q;
    int A[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
              p=i;
              q=j;
            }
        }
    }
    p++;
    q++;
    p=3-p;
    if(p<0)
    {
        p=-1*p;
    }
    q=3-q;
    if(q<0)
    {
        q=-1*q;
    }
    n=p+q;
    cout<<n;
    return 0;
}
