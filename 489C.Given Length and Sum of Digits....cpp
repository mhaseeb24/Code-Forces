#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int m,int s)
{
    if(s==0&&m!=1)
    {
        cout<<-1<<" "<<-1;
    }
    else if(s==0&&m==1)
    {
        cout<<0<<" "<<0;
    }
    else
    {
        vector<int>A;
        vector<int>Z;
        for(int i=0;i<m;i++)
        {
            int v=min(9,s);
            A.pb(v);
            s=s-v;
        }
        if(s!=0)
        {
            cout<<-1<<" "<<-1;
            return;
        }
        for(auto &e:A)
        {
            Z.pb(e);
        }
        if(A.at(A.size()-1)==0)
        {
            A.at(A.size()-1)++;
            for(int i=A.size()-2;i>=0;i--)
            {
                if(A.at(i)!=0)
                {
                    A.at(i)--;
                    break;
                }
            }
        }
        for(int i= m-1;i>=0;i--)
        {
            cout<<A.at(i);
        }
        cout<<" ";
        for(auto &e:Z)
        {
            cout<<e;
        }
    }
}
int main()
{
    lessTime
    int m,s;
    cin>>m>>s;
    solve(m,s);
    return 0;
}
