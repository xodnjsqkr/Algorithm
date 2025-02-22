#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++) 
    {
        for(int j=x-i-1;j>0;j--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        cout<<"*\n";
    }
    for(int i=0;i<x;i++) 
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<2*(x-i-1);j++) 
        {
            cout<<" ";
        }
        cout<<"*\n";
    }
    return 0;
}