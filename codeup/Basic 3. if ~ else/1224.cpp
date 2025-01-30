#include <iostream>
using namespace std;
int main(void)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a/(float)b)<(c/(float)d)) cout<<"<";
    else if((a/(float)b)==(c/(float)d)) cout<<"=";
    else cout<<">";
    return 0;
}