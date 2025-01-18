#include <iostream>
using namespace std;
int main(void)
{
    int y,m,d;
    cin>>y>>m>>d;
    ((y-m+d)%10==0?cout<<"대박":cout<<"그럭저럭");
    return 0;
}