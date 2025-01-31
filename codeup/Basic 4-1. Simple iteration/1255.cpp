#include <iostream>
using namespace std;
int main(void)
{
    double x,y;
    cin>>x>>y;
    cout<<fixed;
    cout.precision(2);
    if(x<y)
    {
        for(;x<=y;x+=0.01)
        {
            cout<<x<<" ";
        }
    }
    else
    {
        for(;y<=x;y+=0.01)
        {
            cout<<y<<" ";
        }
    }
    return 0;
}