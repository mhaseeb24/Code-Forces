#include<bits/stdc++.h>
using namespace std;
void check(string s,unordered_map<string,int>&REG)
{
    auto a=REG.find(s);
    if(a==REG.end())
    {
        REG[s]=0;
        cout<<"OK"<<endl;
    }
    else
    {
        a->second=a->second+1;
        cout<<a->first<<a->second<<endl;
    }
}
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    unordered_map<string,int>REG;
    while(n)
    {
        string s;
        cin>>s;
        if(REG.size()==0)
        {
            REG[s]=0;
            cout<<"OK"<<endl;
        }
        else
        {
            check(s,REG);
        }
        n--;
    }
    return 0;
}
