#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            if(s.at(i)=='a')
            {
                s.at(i)='b';
            }
            else
            {
                s.at(i)='a';
            }
        }
        else
        {
            if(s.at(i)=='z')
            {
                s.at(i)='y';
            }
            else
            {
                s.at(i)='z';
            }
        }
    }
    cout<<s<<endl;
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    while(T)
    {
        string s;
        cin>>s;
        solve(s);
        T--;
    }
    return 0;
}
