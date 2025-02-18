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
            if(i==0||i==x-1||j==0||j==x-1||i==j||i+j==x-1||j==x/2||i==x/2)
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