#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    for(;x<=y;x++)
    {
        if(x%2!=0)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}