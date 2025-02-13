#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(j==0||j==x-1||i==0||i==x-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}