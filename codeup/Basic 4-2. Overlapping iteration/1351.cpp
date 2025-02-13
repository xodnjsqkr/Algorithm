#include <iostream>
using namespace std;
int main(void)
{
    int start,end;
    cin>>start>>end;
    for(int i=start;i<=end;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<"\n";
        }
    }
    return 0;
}