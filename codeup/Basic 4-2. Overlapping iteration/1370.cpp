#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    for(int a=0;a<y;a++)
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            cout<<"*\n";
        }
        for(int i=x-2;i>=0;i--)
        {
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            cout<<"*\n";
        }
    }
    return 0;
}