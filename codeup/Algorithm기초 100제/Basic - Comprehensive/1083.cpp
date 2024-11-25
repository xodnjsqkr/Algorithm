#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        (i%3!=0)?cout<<i<<" ":cout<<"X ";
    }
    return 0;
}