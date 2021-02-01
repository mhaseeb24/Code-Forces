#include<bits/stdc++.h>
#define ll long long int
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    int n,k;
    cin>>n>>k;
    vector<int>ANS;
    int temp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        temp=temp+k;
        if(temp<=5)
        {
            ans++;
        }
        ANS.push_back(temp);
    }
    sort(ANS.begin(),ANS.end());
    cout<<ans/3;
    return 0;
}
