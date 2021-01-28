#include<bits/stdc++.h>
using namespace std;
int isInt(double x)
{
    if(ceil(x)==floor(x)&&x>=0)
        return 1;
    else
        return 0;
}
int main()
{
    double n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<double>A;
    A.push_back(a);
    A.push_back(b);
    A.push_back(c);
    sort(A.begin(),A.end());
    vector<double>ANS;
    if(isInt(n/A[0]))
    {
        cout<<n/A[0];
        return 0;
    }
    else
    {
        a=double(int(n)/int (A[0]));
        double x=0;
        for(double i=a;i>=0;i--)
        {
            for(double j=0;j<n;j++)
            {
                if((A[0]*i+A[1]*j)>n)
                {
                    break;
                }
                x=(n-(A[0]*i)-(A[1]*j))/A[2];
                if(isInt(x))
                {
                    ANS.push_back(i+j+x);
                }
            }
        }
    }
    sort(ANS.begin(),ANS.end());
    cout<<ANS.at(ANS.size()-1);
    return 0;
}
