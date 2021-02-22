
/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
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
    vector<int>A;
    while(t)
    {
        int n;
        cin>>n;
        int temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            A.pb(temp);
        }
        sort(A.begin(),A.end());
        ll x=upper_bound(A.begin(),A.end(),A.at(0))-A.begin();
        cout<<n-x<<endl;
        t--;
    }
    return 0;
}
