#include <iostream>
using namespace std;
int main(void)
{
    int x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}