#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int c=1;
    while(k%10!=r)
    {
        k=k+k;
        c++;
    }
    cout<<c;
    return 0;
}
