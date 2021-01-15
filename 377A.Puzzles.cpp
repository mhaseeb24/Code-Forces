#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<int>v2;
    int i=0;
    int s=n-1;
    while(s!=v.size())
    {
        v2.push_back(v.at(s)-v.at(i));
        i=i+1;
        s=s+1;
    }
    sort(v2.begin(),v2.end());
    cout<<v2.at(0);
    return 0;
}
