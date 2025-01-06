#include <iostream>
using namespace std;
int main(void)
{
    int h,b,c,s;
    float result;
    cin>>h>>b>>c>>s;
    result=static_cast<long long>(h) * b * c * s / 8.0;
    result/=1024;
    result/=1024;
    cout<<fixed;
    cout.precision(1);
    cout<<result<<" MB"<<endl;    
    return 0;
}