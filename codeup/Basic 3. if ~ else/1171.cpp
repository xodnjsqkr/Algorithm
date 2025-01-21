#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<x;
    (y<10?cout<<'0'<<y:cout<<y);
    (z>99?cout<<z:(z<100&&z>9?cout<<'0'<<z:cout<<"00"<<z));
    return 0;
}