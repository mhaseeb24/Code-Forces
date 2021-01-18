#include<bits/stdc++.h>
#define VT vector
#define pb push_back
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    VT<double>lat;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        lat.pb(x);
    }
    sort(lat.begin(),lat.end());
    double maxx=0,temp;
    if(lat.at(0)!=0)
    {
        maxx=lat.at(0);
    }
    if(lat.at(n-1)!=l)
    {
        maxx=max(maxx,(l-lat.at(n-1)));
    }
    for(int i=0;i<n-1;i++)
    {
        temp=(lat.at(i+1)-lat.at(i))/2;
        maxx=max(maxx,temp);
    }
    cout<<setprecision(10)<<maxx;
    return 0;
}
