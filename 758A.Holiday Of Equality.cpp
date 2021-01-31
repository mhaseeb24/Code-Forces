#include<bits/stdc++.h>
#define ll long long int
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    vector<int>TR;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        TR.push_back(temp);
    }
    sort(TR.begin(),TR.end(),greater<int>());
    temp=0;
    for(int i=1;i<n;i++)
    {
        temp=temp+(TR.at(0)-TR.at(i));
    }
    cout<<temp;
}
int main()
{
    lessTime;
    int n;
    cin>>n;
    solve(n);
    return 0;
}
