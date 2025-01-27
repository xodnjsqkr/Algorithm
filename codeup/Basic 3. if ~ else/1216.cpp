#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    if((y-z)==x)
    {
        cout<<"does not matter";
    }
    else if((y-z)>x)
    {
        cout<<"advertise";
    }
    else
    {
        cout<<"do not advertise";
    }
    return 0;
}