#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    lessTime;
    int n;
    cin>>n;
    int temp;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1)
        {
            a.pb(i+1);
        }
        else if(temp==2)
        {
            b.pb(i+1);
        }
        else
        {
            c.pb(i+1);
        }
    }
    int MIN1=min(a.size(),b.size());
    int MIN2=c.size();
    int MIN3=min(MIN1,MIN2);
    if(a.size()>0&&b.size()>0&&c.size()>0)
    {
        for(int i=0;i<MIN3;i++)
        {
            cout<<a.at(i)<<" "<<b.at(i)<<" "<<c.at(i)<<endl;
        }
    }
    else
    {
        cout<<0;
    }
    return 0;
}
