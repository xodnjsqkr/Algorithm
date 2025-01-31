#include <iostream>
using namespace std;
int main(void)
{
    char x,y;
    cin>>x>>y;
    if(x<y)
    {
        for(;x<=y;x++)
        {
            cout<<x<<" ";
        }
    }
    else
    {
        for(;y<=x;y++)
        {
            cout<<y<<" ";
        }
    }
    return 0;
}