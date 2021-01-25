#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    vector<int>Ans;
    Ans.push_back(x1);
    Ans.push_back(x2);
    Ans.push_back(x3);
    Ans.push_back(x4);
    sort(Ans.begin(),Ans.end());
    a=Ans.at(0)+Ans.at(1)-Ans.at(3);
    b=Ans.at(0)+Ans.at(2)-Ans.at(3);
    c=Ans.at(1)+Ans.at(2)-Ans.at(3);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
