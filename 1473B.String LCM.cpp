/**
 *    author:  mhaseeb
 *    while ( !( succeed = try() ) );
**/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define pb push_back
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
string operator *(string a,int b)
{
    string output="";
    while(b--)
    {
        output+=a;
    }
    return output;
}
bool check_1(string a,string b)
{
    char l;
    int c=1,d=1;
    for(int i=0;i<a.size();i++)
    {
        if(i==0)
        {
            l=a.at(i);
        }
        else
        {
            if(a.at(i)!=l)
            {
                c=0;
                break;
            }
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b.at(i)!=l)
        {
            d=0;
            break;
        }
    }
    if(c==1&&d==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool s_divide(string a,string b)
{
    int t=0;
    if(a.size()>b.size())
    {
        string temp=b;
        while(b.size()<=a.size())
        {
            if(b==a)
            {
                return 1;
            }
            else
            {
                 b+=temp;
            }
        }
        return 0;
    }
    else
    {
        string temp=a;
        while(a.size()<=b.size())
        {
            if(a==b)
            {
                return 1;
            }
            else
            {
                 a+=temp;
            }
        }
        return 0;
    }
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int LCM(int a,int b)
{
    return(a/gcd(a,b))*b;
}
void solve(string s,string t)
{
    if(check_1(s,t))
    {
        char l=s.at(0);
        int r=LCM(s.size(),t.size());
        for(int i=0;i<r;i++)
        {
            cout<<l;
        }
        cout<<endl;
    }
    else
    {
        if(s.size()>t.size())
        {
            int tem=0,i;
            string temp;
            while(tem<=t.size())
            {
                char x;
                x=s.at(i++);
                temp+=x;
                if(s_divide(s,temp))
                {
                    if(s_divide(t,temp))
                    {
                        int k,l;
                        k=s.size()/temp.size();
                        l=t.size()/temp.size();
                        int a=LCM(k,l);
                        cout<<temp*a<<endl;
                        return;
                    }
                    else
                    {
                        cout<<-1<<endl;
                        return;
                    }
                }
                tem++;
            }
            cout<<-1<<endl;
        }
        else
        {
            int tem=0,i;
            string temp;
            while(tem<=s.size())
            {
                char x;
                x=t.at(i++);
                temp+=x;
                if(s_divide(t,temp))
                {
                    if(s_divide(temp,s))
                    {
                        int k,l;
                        k=s.size()/temp.size();
                        l=t.size()/temp.size();
                        int a=LCM(k,l);
                        cout<<temp*a<<endl;
                        return;
                    }
                    else
                        {
                            cout<<-1<<endl;
                            return;
                        }
                }
                tem++;
            }
            cout<<-1<<endl;
        }
    }
}
int main()
{
    lessTime;
    int q;
    cin>>q;
    while(q)
    {
        string s,t;
        cin>>s>>t;
        solve(s,t);
        q--;
    }
    return 0;
}
