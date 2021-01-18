#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        a=a-a/2-1;
        cout<<a<<endl;
    }
    return 0;
}
