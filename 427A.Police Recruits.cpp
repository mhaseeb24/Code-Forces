#include<bits/stdc++.h>
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    int temp;
    unordered_map<int,int>ANS;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>=0)
        {
            ANS[1]=ANS[1]+temp;
        }
        else
        {
            if(ANS[1]>0)
            {
                ANS[1]--;
            }
            else
            {
                ANS[2]++;
            }
        }
    }
    cout<<ANS[2];
}
int main()
{
    lessTime;
    int n;
    cin>>n;
    solve(n);
    return 0;
}

