#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<((x<y?x:y)<z?(x<y?x:y):z)<<endl;
    return 0;
}