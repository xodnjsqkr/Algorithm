#include <iostream>
using namespace std;
int main(void)
{
    int x,y,sum=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            cout<<"-"<<i;
            sum-=i;
        }
        else
        {
            cout<<"+"<<i;
            sum+=i;
        }
    }
    cout<<"="<<sum;
    return 0;
}