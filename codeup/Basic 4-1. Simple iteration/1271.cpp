#include <iostream>
using namespace std;
int main(void)
{
    int x,y,max=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>y;
        if(max<y)
        {
            max=y;
        }
    }
    cout<<max;
    return 0;
}