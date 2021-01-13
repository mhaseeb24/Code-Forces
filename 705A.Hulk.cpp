#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,r=0;
    cin>>n;
    string s[2]={"I hate ","I love "};
    string s3="that ";
    string s4="it";
    for(int i=0;i<n;i++)
    {
     if(n==1)
     {
         cout<<s[0];
     }
     else
     {
         cout<<s[i];
         if(r<n-1)
         {
             cout<<s3;
         }
         if(r<n-1)
         {
            if(i==1)
            {
                i=-1;
            }
         }
         else
            {
                break;
            }
         r++;
     }
    }
    cout<<s4;
    return 0;
}
