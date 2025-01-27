#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    if(x%y==0)
    {
        cout<<y<<"*"<<(x/y)<<"="<<x;
    }
    else
    {
        if(y%x==0)
        {
            cout<<x<<"*"<<(y/x)<<"="<<y;
        }
        else
        {
            cout<<"none";
        }
    }
    return 0;
}