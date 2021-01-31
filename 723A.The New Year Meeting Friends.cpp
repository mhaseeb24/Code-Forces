#include<bits/stdc++.h>
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class MIN
{
private:
    vector<int>A;
    int ans;
public:
    MIN(vector<int>a)
    {
        A.push_back(a.at(0));
        A.push_back(a.at(1));
        A.push_back(a.at(2));
        ans=0;
    }
    void sortVec();
    void solve();
};
void MIN::sortVec()
{
    sort(A.begin(),A.end());
}
void MIN::solve()
{
    ans=A.at(1)-A.at(0);
    ans=ans+(A.at(2)-A.at(1));
    cout<<ans;
}
int main()
{
    lessTime;
    vector<int>a;
    int temp;
    for(int i=0;i<3;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    MIN OB(a);
    OB.sortVec();
    OB.solve();
    return 0;
}
