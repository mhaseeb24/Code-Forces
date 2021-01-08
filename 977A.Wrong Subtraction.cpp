#include<iostream>
using namespace std;
int answer(int n,int k)
{
    while(k>0)
    {
        if(n%10==0)
        {
            n=n/10;
            k--;
        }
        else
        {
            n--;
            k--;
        }
    }
    return n;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<answer(n,k);
    return 0;
}
