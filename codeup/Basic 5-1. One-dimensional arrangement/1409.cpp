#include <iostream>
using namespace std;
int main(void)
{
    int k,c[10];
    for (int i=0;i<10;i++)
    {
        cin>>c[i];
    }
    cin>>k;
    cout<<c[--k]<<"\n";
    return 0;
}