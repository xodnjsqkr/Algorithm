#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    (x<=10?cout<<"정상":(x<=20?cout<<"과체중":cout<<"비만"));
    return 0;
}