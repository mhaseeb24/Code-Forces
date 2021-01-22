#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int totalTime=4*60;
    totalTime=totalTime-t;
    int prob=0;
    int c=1;
    if(totalTime>=5)
    {
        while(n>0)
        {
            totalTime=totalTime-c*5;
            if(totalTime<0)
            {
                break;
            }
            if(totalTime==0)
            {
                prob++;
                break;
            }
            n--;
            prob++;
            c++;
        }
    }
    else
    {
        cout<<0;
        return 0;
    }
    cout<<prob;
    return 0;
}
