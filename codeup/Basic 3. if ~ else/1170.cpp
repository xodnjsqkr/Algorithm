#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<x<<y;
    (z<10?cout<<'0'<<z:cout<<z);
    return 0;
}