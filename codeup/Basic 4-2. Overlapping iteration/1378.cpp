#include <iostream>
using namespace std;
int main(void)
{
    int x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum+=j;
        }
    }
    cout<<sum;
    return 0;
}