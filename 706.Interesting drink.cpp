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
    int n,q;
    ll temp;
    vector<ll>X;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        X.pb(temp);
    }
    sort(X.begin(),X.end());
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>temp;
        if(temp<X[0])
        {
            cout<<0<<endl;
            continue;
        }
        else if(temp>=X[X.size()-1])
        {
            cout<<X.size()<<endl;
            continue;
        }
        else
        {
            int left=0;
            int right=X.size()-1;
            while(left<=right)
            {
                ll mid =left+(right-left)/2;
                if(X[mid]>temp)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            cout<<left<<endl;
        }
    }
    return 0;
}
