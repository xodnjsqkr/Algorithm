#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int a,b,temp;
    double result;
    cin>>a>>b;
    result=a;
    for(int i=0;i<b;i++)
    {
        cin>>temp;
        result+=result*temp/100;
    }
    if((result-a)>0)
    {
        cout<<round(result-a)<<"\n"<<"good";
    }
    else if(result==a)
    {
        cout<<round(result-a)<<"\n"<<"same";
    }
    else
    {
        cout<<round(result-a)<<"\n"<<"bad";
    }
    return 0;
}