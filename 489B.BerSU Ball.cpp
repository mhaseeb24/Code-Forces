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
void solve(vector<int>boys,int girls[])
{
    sort(boys.begin(),boys.end());
    int maxi=0;
    for(int i=0;i<boys.size();i++)
    {
        if(boys.at(i)==1)
        {
            if(girls[1]>0)
            {
                maxi++;
                girls[1]--;
            }
            else if(girls[2]>0)
            {
                maxi++;
                girls[2]--;
            }
        }
        else if(boys.at(i)==100)
        {
            if(girls[99]>0)
            {
                maxi++;
                girls[99]--;
            }
            else if(girls[100]>0)
            {
                maxi++;
                girls[100]--;
            }
        }
        else
        {
            if(girls[boys.at(i)-1]>0)
            {
                maxi++;
                girls[boys.at(i)-1]--;
            }
            else if(girls[boys.at(i)]>0)
            {
                maxi++;
                girls[boys.at(i)]--;
            }
            else if(girls[boys.at(i)+1]>0)
            {
                maxi++;
                girls[boys.at(i)+1]--;
            }
        }
    }
    cout<<maxi;
}
int main()
{
    int n,m,temp;
    vector<int>boys;
    cin>>n;
    int girls[101]={0};
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        boys.pb(temp);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        girls[temp]++;

    }
    solve(boys,girls);
    return 0;
}
