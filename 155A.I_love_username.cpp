#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max,min;
    int a;
    cin>>a;
    max=min=a;
    int min_a=0,max_a=0;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(a<min)
        {
            min=a;
            min_a++;
        }
        else if(a>max)
        {
            max=a;
            max_a++;
        }
        else{}
    }
    cout<<min_a+max_a;
    return 0;
}
