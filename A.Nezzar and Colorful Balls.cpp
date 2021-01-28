#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p[100001]={};
        int x;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            p[x]++;
        }
        if(n==1)
        {
            cout<<1<<endl;
            break;
        }
        sort(p,p+100001);
        cout<<p[100000]<<endl;
    }
    return 0;
}

