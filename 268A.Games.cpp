#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>game;
    int x,y;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        game.push_back(make_pair(x,y));
    }
    for(const auto &e:game)
    {
        for(const auto &f:game)
        {
            if(e.second==f.first)
            {
                res++;
            }

        }
    }
    cout<<res;
    return 0;
}
