/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define mp make_pair
#define pb push_back
#define itr(i,a,b) for(int i=a;i<b;i++)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    int temp;
    vector<int>students;
    int arr[n+1]={};
    int max=0;
    itr(i,0,n)
    {
        cin>>temp;
        students.pb(temp);
        arr[temp]++;
        if(arr[temp]>max)
        {
            max=arr[temp];
        }
    }
    sort(students.begin(),students.end());
    vector<int>::iterator ip;
    ip=std::unique(students.begin(),students.end());
    students.resize(std::distance(students.begin(),ip));
    if(students.size()<max)
    {
        cout<<students.size()<<endl;
    }
    else if(students.size()==max)
    {
        cout<<max-1<<endl;
    }
    else
    {
        cout<<max<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        solve(n);
        t--;
    }
    return 0;
}
