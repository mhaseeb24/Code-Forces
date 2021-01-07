#include<iostream>
using namespace std;
class Forces
{
    int n;
    int A[100][3];
public:
    void get(int n1)
    {
        n=n1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>A[i][j];
            }
        }
    }
    void equi()
    {
        int x=0,y=0,z=0;
          for(int i=0;i<n;i++)
          {
              x=x+A[i][0];
              y=y+A[i][1];
              z=z+A[i][2];
          }
        if(x==0&&y==0&&z==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
};
int main()
{
    Forces f;
    int n;
    cin>>n;
    f.get(n);
    f.equi();
    return 0;
}
