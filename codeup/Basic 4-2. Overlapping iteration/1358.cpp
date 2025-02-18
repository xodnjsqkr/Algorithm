#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=0;i<x/2+1;i++)
    {
        for(int j=0;j<x/2-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i*2+1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}