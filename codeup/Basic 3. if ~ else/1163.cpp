#include <iostream>
using namespace std;
int main(void)
{
    int y,m,d,sum=0;
    cin>>y>>m>>d;
    sum=((y+m+d)/100)%10;
    (sum%2==0?cout<<"대박":cout<<"그럭저럭");
    return 0;
}