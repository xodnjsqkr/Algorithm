#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y>z&&x+z>y&&y+z>x)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}