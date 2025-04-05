#include <iostream>
using namespace std;
int main(void)
{
    int x,stack[100]={};
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>stack[i];
    }
    for(int i=0;i<=1;i++)
    {
        for(int i=0;i<x;i++)
        {
            cout<<stack[i]<<"\n";
        }
    }
    return 0;
}