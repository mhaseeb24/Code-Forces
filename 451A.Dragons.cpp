#include<bits/stdc++.h>
#define VT vector
#define pb push_back
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    VT<pair<int,int>>Dra;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        Dra.pb(make_pair(x,y));
    }
    sort(Dra.begin(),Dra.end());
    for(const auto &e:Dra)
    {
        if(s>e.first)
        {
            s=s+e.second;
        }
        else
        {
           cout<<"NO";
           return 0;
        }
    }
    cout<<"YES";
    return 0;
}
