#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<fixed;
    cout.precision(2);
    cout<<(x+y+z)/3.0;
    return 0;
}