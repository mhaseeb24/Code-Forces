#include<bits/stdc++.h>
#define ll long long int
#define lessTime ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void getAB(vector<int>&A,vector<int>&B,int n)
{
     int temp;
     for(int i=0;i<n;i++)
     {
         cin>>temp;
         A.push_back(temp);
     }
     for(int i=0;i<n;i++)
     {
         cin>>temp;
         B.push_back(temp);
     }
}
int main()
{
    lessTime;
    int T;
    cin>>T;
    int n,k;
    vector<int>A;
    vector<int>B;
    while(T)
    {
        cin>>n>>k;
        getAB(A,B,n);
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int c=0,d=A.size()-1,siz=A.size()-1;
        while(k)
        {
            if(A.at(c)<B.at(d))
            {
                swap(A.at(c),B.at(d));
                c++;
                d--;
                k--;
                siz--;
            }
            else
            {
                break;
            }
        }
        int sum=0;
        for(auto &e:A)
        {
            sum=sum+e;
        }
        cout<<sum<<endl;
        A.clear();
        B.clear();
        T--;
    }
    return 0;
}
