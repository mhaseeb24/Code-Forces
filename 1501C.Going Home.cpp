#pragma GCC optimize(3)
#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define itr(i,a,b) for(int i=a;i>=b;i--)
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n)
{
    vector<int>A;
    int temp;
    rep(i,0,n)
    {
        scanf("%d",&temp);
        A.pb(temp);
    }
    unordered_map<int,pair<int,int>>TR;
    rep(i,0,n)
    {
        rep(j,i+1,n)
        {
            temp=A.at(i)+A.at(j);
            std::unordered_map<int,pair<int,int>>::const_iterator got=TR.find(temp);
            if(got==TR.end())
            {
                TR[temp]=mp(i,j);
            }
            else
            {
                if((got->second.first) != i && (got->second.second) != j && (got->second.first) != j && (got->second.second) != i)
                {
                    printf("YES\n");
                    printf("%d %d %d %d",got->second.first+1,got->second.second+1,i+1,j+1);
                    return;
                }
            }
        }
    }
    cout<<"NO";
}
int main()
{
    lessTime;
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}
