#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=1;i<=9;i++)
    {
        cout<<x<<"*"<<i<<"="<<x*i<<"\n";
    }
    return 0;
}