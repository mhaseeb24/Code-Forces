#include<iostream>
using namespace std;
class Drinks
{
private:
    int n;
    fraction *p=new fraction [n];
    fraction sum=0;
public:
    void getdata(int n);
    void result();
};
void Drinks::getdata(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        sum=sum+p[i];
    }
}
void Drinks::result()
{
    n=n*100;
    sum=(sum/double(n))*100;
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    Drinks obj;
    obj.getdata(n);
    obj.result();
    return 0;
}
