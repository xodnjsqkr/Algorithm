#include <iostream>
using namespace std;
int main()
{
    int c;
    cin>>hex>>c;
    for(int i=1;i<=15;i++)
    {
        cout<<uppercase << hex << c<<"*"<<i<<"="<< c*i<<endl; 
    }
    return 0;
}