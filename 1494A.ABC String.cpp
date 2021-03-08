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
#define MOD 1000000007
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(string exp)
{
	stack<char> S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}
void solve(string s)
{
    char fir=s.at(0);
    char lar=s.at(s.size()-1);
    char mid;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s.at(i)!=fir&&s.at(i)!=lar)
        {
            mid=s.at(i);
            break;
        }
    }
    string temp=s;
    for(int i=0;i<temp.size();i++)
    {
        if(temp.at(i)==fir)
        {
            temp.at(i)='(';
        }
        else if(temp.at(i)==lar)
        {
            temp.at(i)=')';
        }
        else
        {
            temp.at(i)='(';
        }
    }
    int a=0,b=0;
    if(AreParanthesesBalanced(temp))
    {
        a=1;
    }
    temp=s;
    for(int i=0;i<temp.size();i++)
    {
        if(temp.at(i)==fir)
        {
            temp.at(i)='(';
        }
        else if(temp.at(i)==lar)
        {
            temp.at(i)=')';
        }
        else
        {
            temp.at(i)=')';
        }
    }
    if(AreParanthesesBalanced(temp))
    {
        b=1;
    }
    if(a==1||b==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    lessTime;
    int t;
    cin>>t;
    while(t)
    {
        string s;
        cin>>s;
        solve(s);
        t--;
    }
    return 0;
}
