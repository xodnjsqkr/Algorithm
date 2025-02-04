#include <iostream>
using namespace std;
int main(void)
{
    int x,y,z,n,i,s;
    cin>>x>>y>>z>>n;
    for(s=x,i=2;i<=n;i++)
        s=s*y+z;
    cout<<s;
    return 0;
}