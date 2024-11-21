#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<(x%2==0?"even":"odd")<<endl;
    cout<<(y%2==0?"even":"odd")<<endl;
    cout<<(z%2==0?"even":"odd")<<endl;
    return 0;
}