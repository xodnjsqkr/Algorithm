#include <iostream>
using namespace std;
int main(void)
{
    int x;
    replay:
        cin>>x;
        if(x!=0)
        {
            cout<<x<<endl;
            goto replay;
        }
    return 0;
}