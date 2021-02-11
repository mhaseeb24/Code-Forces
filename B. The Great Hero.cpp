#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(ll A,ll B,ll n)
{
    vector<ll>att;
    vector<ll>hel;
    vector<pair<ll,ll>>MON;
    ll temp,i,s=0;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        att.pb(temp);
    }
    for(i=0;i<n;i++)
    {
        cin>>temp;
        hel.pb(temp);
    }
    for(i=0;i<n;i++)
    {
        MON.pb(make_pair(att.at(i),hel.at(i)));
    }
    i=0;
    sort(MON.begin(),MON.end());
    while(n!=0)
    {
        if(i==(MON.size()-1))
        {
            float x,y;
            x=float(B)/float(MON[i].first);
            y=float(MON[i].second)/float(A);
            if(x>=y)
            {
                MON[i].second=MON[i].second-ceil(y)*A;
                B=B-(MON[i].first*ceil(y));
                if(MON[i].second>0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
            else
            {
                MON[i].second=MON[i].second-ceil(x)*A;
                B=B-(MON[i].first*ceil(x));
                if(MON[i].second>0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        ll tr;
        if(MON[i].second%A==0)
        {
            tr=MON[i].second/A;
        }
        else
        {
            tr=(MON[i].second/A)+1;
        }
        MON[i].second=MON[i].second-tr*A;
        B=B-(MON[i].first*tr);
        if(B<=0&&i!=MON.size()-1)
        {
            cout<<"NO"<<endl;
            return;
        }
    i++;
    n--;
    }
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    ll A,B,n;
    while(T)
    {
        cin>>A>>B>>n;
        solve(A,B,n);
        T--;
    }
    return 0;
}
