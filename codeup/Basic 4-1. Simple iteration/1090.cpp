#include <iostream>
using namespace std;
int main(void)
{
    unsigned long long int a,r,num;
    cin>>a>>r>>num;
    for(int i=1;i<num;i++)
    {
        a*=r;
    }
    cout<<a;
    return 0;
}