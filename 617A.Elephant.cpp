#include<iostream>
using namespace std;
void coordinates(int x)
{
    int n=0,e=0;
    while(x>e)
    {
        if(x-e>=5)
        {
            e=e+5;
            n++;
        }
        else if(x-e>=4)
        {
            e=e+4;
            n++;
        }
        else if(x-e>=3)
        {
            e=e+3;
            n++;
        }
        else if(x-e>=2)
        {
            e=e+2;
            n++;
        }
        else if(x-e>=1)
        {
            e=e+1;
            n++;
        }
        else
        {
            n++;
        }
    }
    cout<<n;
}
int main()
{
    int x;
    cin>>x;
    coordinates(x);
    return 0;
}
