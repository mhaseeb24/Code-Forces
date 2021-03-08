/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    int n;
    cin>>n;
    vector<pair<int,int>>A;
    for(int i=0;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        A.pb(mp(temp1,temp2));
    }
    sort(A.begin(),A.end());
    for(int i=1;i<n;i++)
    {
        if(A[i-1].second>A[i].second)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}
