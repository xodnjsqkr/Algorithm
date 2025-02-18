#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=x-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<x;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}