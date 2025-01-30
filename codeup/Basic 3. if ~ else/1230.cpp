#include <iostream>
using namespace std;
int main(void)
{
    int cnt=0;
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        if(x<=170)
        {
            cout<<"CRASH "<<x;
            return 0;
        }
    }
    cout<<"PASS";
    return 0;
}