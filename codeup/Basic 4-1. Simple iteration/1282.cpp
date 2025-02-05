#include <iostream>
using namespace std;
int main(void)
{
    long long int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        if((i*i<=x)&&(i+1)*(i+1)>x)
        {
            cout<<x-(i*i)<<" "<<i;
            break;
        }
    }
    return 0;
}