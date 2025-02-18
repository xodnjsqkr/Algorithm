#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(i==0||i==x-1||j==0||j==x-1||((j+i+1)%y==0))
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