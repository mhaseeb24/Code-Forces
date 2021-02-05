#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void get(vector<int> &A,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        A.pb(temp);
    }
}
void solve(vector<int>&A,int n)
{
    int temp;
    sort(A.begin(),A.end());
    int diff=INT_MAX;
    for(int i=1;i<n;i++)
    {
        temp=A.at(i)-A.at(i-1);
        diff=min(diff,temp);
    }
    cout<<diff<<endl;
}
int main()
{
    int T;
    cin>>T;
    int n;
    vector<int>A;
    while(T)
    {
        cin>>n;
        get(A,n);
        solve(A,n);
        A.clear();
        T--;
    }
    return 0;
}
