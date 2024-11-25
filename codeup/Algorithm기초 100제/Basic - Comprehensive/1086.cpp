#include <iostream>
using namespace std;
int main(void)
{
    int w,h,b;
    float result;
    cin>>w>>h>>b;
    result=static_cast<long long>(w)*h*b/8.0;
    result/=1024;
    result/=1024;
    cout<<fixed;
    cout.precision(2);
    cout<<result<<" MB"<<endl;   
    return 0;
}