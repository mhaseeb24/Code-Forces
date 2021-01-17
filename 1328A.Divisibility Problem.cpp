#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>S;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        S.push_back(make_pair(x,y));
    }
    for(const auto &e:S)
    {
        if(e.first>=e.second&&e.first%e.second!=0)
        {
            int t;
            t=e.first/e.second;
            t++;
            t=t*e.second;
            t=t-e.first;
            cout<<t<<endl;
        }
        else if(e.first%e.second==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(e.second-e.first)<<endl;
        }
    }
    return 0;
}

