#include<bits/stdc++.h>
#define V vector
#define pb push_back
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int x;
    V<int>s;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        s.pb(x);
    }
    vector<int>::iterator ip;
    ip = std::unique(s.begin(),s.end());
    unique(s.begin(),s.end());
    s.resize(std::distance(s.begin(), ip));
    x=s.at(0)-1;
    m=s.size();
    int i=1;
    while(i<m)
    {
        if(s.at(i-1)<s.at(i))
        {
            x=x+(s.at(i)-s.at(i-1));
            i++;
        }
        else
        {
            x=x+(n-s.at(i-1))+1;
            x=x+(s.at(i)-1);
            i++;
        }
    }
    cout<<x;
    return 0;
}
