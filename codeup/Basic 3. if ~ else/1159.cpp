#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    ((50<=x&&x<=70)||(x%6==0)?cout<<"win":cout<<"lose");
    return 0;
}