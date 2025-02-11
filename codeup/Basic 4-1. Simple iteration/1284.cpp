#include <iostream>
using namespace std;
bool is_prime(int x)
{
    if(x<=1) return false;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main(void)
{
    int x;
    cin>>x;
    for(int i=2;i*i<x;i++)
    {
        if(x%i==0&&is_prime(i)&&is_prime(x/i)) 
        {
            cout<<i<<" "<<x/i;
            return 0;
        }
    }
    cout<<"wrong number";
    return 0;
}