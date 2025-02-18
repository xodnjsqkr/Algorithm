#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    char z;
    cin>>x>>y>>z;
    if(z=='L')
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            for(int j=0;j<y;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            for(int j=x-i-1;j>0;j--)
            {
                cout<<" ";
            }
            for(int j=0;j<y;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}