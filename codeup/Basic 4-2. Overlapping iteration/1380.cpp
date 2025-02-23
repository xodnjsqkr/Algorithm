#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i+j==x)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
    return 0;
}