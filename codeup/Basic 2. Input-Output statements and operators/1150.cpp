#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<((x<y)?((x<z)?x:z):((y<z)?y:z));
    return 0;
}