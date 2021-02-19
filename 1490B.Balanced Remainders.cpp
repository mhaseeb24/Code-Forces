/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    int t;
    cin>>t;
    int n;
    while(t)
    {
        int temp;
        cin>>n;
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp%3==0)
            {
                c0++;
            }
            else if(temp%3==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        vector<int>A;
        A.pb(c0);
        A.pb(c1);
        A.pb(c2);
        int ans=0;
        int b=(A.at(0)+A.at(1)+A.at(2))/3;
        for(int i=0;i<6;i++)
        {
            temp=A.at((i)%3)-b;
            if(temp>0)
            {
                ans=ans+temp;
                A.at((i+1)%3)=A.at((i+1)%3)+temp;
                A.at(i%3)=A.at(i%3)-temp;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
