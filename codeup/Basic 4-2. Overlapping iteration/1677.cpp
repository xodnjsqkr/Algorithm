#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            if((i==0||i==y-1)&&(j==0||j==x-1))
            {
                cout<<"+";
            }
            else if(i==0||i==y-1)
            {
                cout<<"-";
            }
            else if(j==0||j==x-1)
            {
                cout<<"|";
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