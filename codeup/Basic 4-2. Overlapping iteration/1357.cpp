#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=x-1;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}