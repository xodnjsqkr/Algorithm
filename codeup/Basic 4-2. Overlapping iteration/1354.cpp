#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=x;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}