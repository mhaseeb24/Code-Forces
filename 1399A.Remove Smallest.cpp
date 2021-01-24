#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,a;
    vector<int>A;
    while(t)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>a;
           A.push_back(a);
        }
        sort(A.begin(),A.end());
        int j=1,check=0;
        for(int i=0;i<A.size()-1;i++,j++)
        {
            if((A.at(j)-A.at(i))>1)
            {
                check++;
            }
        }
        if(check)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        A.clear();
        t--;
    }
    return 0;
}
