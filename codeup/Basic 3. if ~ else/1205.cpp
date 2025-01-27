#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    float x,y;
    cin>>x>>y;
    float results[]={
        x+y, 
        x-y, 
        y-x, 
        x*y, 
        x/y, 
        y/x, 
        pow(x, y),
        pow(y, x)
    };
    double max_result=results[0];
    for(int i=0;i<8;i++) 
    {
        if(results[i]>max_result) 
        {
            max_result=results[i];
        }
    }
    cout<<fixed;
    cout.precision(6);
    cout<<max_result;
    return 0;
}