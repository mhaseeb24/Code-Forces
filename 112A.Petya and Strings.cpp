#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m,n;
    cin>>m>>n;
    transform(m.begin(),m.end(),m.begin(),::tolower);
    transform(n.begin(),n.end(),n.begin(),::tolower);
    int r=m.compare(n);
    if(r==1)
    {
        cout<<"1";
    }
    else if(r==-1)
    {
        cout<<"-1";
    }
    else
    {
        cout<<"0";
    }
    return 0;
}
