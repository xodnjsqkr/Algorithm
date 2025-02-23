#include <iostream>
using namespace std;
int main(void)
{
    for(int i=1;i<=9;i++)
    {
        for(int j=2;j<=5;j++)
        {
            if(i*j<10)
            {
                cout<<j<<" x "<<i<<" =  "<<j*i<<"\t";
            }
            else
            {
                cout<<j<<" x "<<i<<" = "<<j*i<<"\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}