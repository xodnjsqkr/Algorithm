#include <iostream>
using namespace std;
int main(void)
{
    int x,y,sum=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>y;
        sum+=y;
    }
    cout<<sum;
    return 0;
}