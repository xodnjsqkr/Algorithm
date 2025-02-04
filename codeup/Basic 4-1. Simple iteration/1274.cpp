#include <iostream>
using namespace std;
int main(void)
{
    int x;
    bool is_prime=true;
    cin>>x;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            is_prime=false;
            break;
        }
    }
    if(is_prime)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
    return 0;
}