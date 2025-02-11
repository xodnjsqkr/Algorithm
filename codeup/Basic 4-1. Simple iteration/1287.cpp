#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=x*i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}