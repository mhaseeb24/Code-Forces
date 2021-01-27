#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    cin>>n;
    long long int temp;
    long long  arr[100003]={};
    long long int  r=0,r2;
    for(long long int  i=0;i<n;i++)
    {
        cin>>temp;
        if(r==0)
        {
            r2=temp;
            r++;
        }
        if(temp<r2)
        {
            r2=temp;
        }
        arr[temp]+=temp;
    }
    long long int *dp=new long long int[n+1];
    for(long long int i=0;i<=n;i++)
    {
        dp[i]=0;
    }
    dp[0]=0;
    dp[1]=arr[r2];
    long long int j=2;
    for(long long int i=r2+1;i<100003;i++)
    {

        if(arr[i]!=0&&arr[i-1]!=0)
        {
            if(j>=3&&(dp[j-3]>dp[j-2]))
            {
                dp[j-2]=dp[j-3];
            }
            dp[j]=arr[i]+dp[j-2];
            j++;
        }
        else if(arr[i]!=0)
        {
            if(j>=1&&(dp[j-2]>dp[j-1]))
            {
                dp[j-1]=dp[j-2];
            }
            dp[j]=arr[i]+dp[j-1];
            j++;
        }
    }

    sort(dp,dp+n+1);
    cout<<dp[n];
    return 0;
}
