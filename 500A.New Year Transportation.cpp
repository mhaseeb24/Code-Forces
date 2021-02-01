#include<bits/stdc++.h>
#define ll long long int
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    int n,t;
    cin>>n>>t;
    vector<int>A;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=1;;)
    {
        if((i)==t)
            {
                cout<<"YES";
                break;
            }
        else
        {
            i=A[i-1]+(i);
        }
        if(i>t)
        {
            cout<<"NO";
            break;
        }
    }
    return 0;
}
