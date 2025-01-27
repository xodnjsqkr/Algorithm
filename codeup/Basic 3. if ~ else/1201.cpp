#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    (x>0?cout<<"양수":(x==0?cout<<0:cout<<"음수"));
    return 0;
}