#include <iostream>
using namespace std;
int main(void)
{
    int x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    cout<<sum;
    return 0;
}