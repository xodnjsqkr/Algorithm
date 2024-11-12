#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<x+y+z<<endl;
    cout<<fixed;
    cout.precision(1);
    cout<<(float)(x+y+z)/3<<endl;
    return 0;
}