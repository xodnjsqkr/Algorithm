#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    (x>y?cout<<">":(y>x)?cout<<"<":cout<<"=");
    return 0;
}