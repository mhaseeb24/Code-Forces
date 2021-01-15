#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,d;
    int i,j,k,m=0;
    for(int s=0;i<t;i++)
    {
        cin>>n>>d;
        int *p=new int [n];
        for(int l=0;l<n;l++)
        {
            cin>>p[l];
            if(p[l]<=d)
            {
                m++;
            }
        }
        if(m==n)
        {
            cout<<"YES";
            continue;
        }

        for(i=0;i<n&&i!=j&&i!=k;i++)
        {
            for(j=0;j<n&&j!=i&&j!=k;j++)
            {
                for(k=0;k<n&&k!=i&&k!=j;k++)
                {
                    if(p[i]==p[j]+p[k]&&p[i]<=d)
                    {

                    }
                }
            }
        }

    }
    return 0;
}
