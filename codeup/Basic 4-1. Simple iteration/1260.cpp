#include <iostream>
using namespace std;
int main(void)
{
    int x,y,sum=0;
    cin>>x>>y;
    for(;x<=y;x++)
    {
        if(x%3==0)
        sum+=x;
    }
    cout<<sum;
    return 0;
}