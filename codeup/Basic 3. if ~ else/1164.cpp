#include <iostream>
using namespace std;
int main(void)
{
    int high=0,cnt=0;
    for(int i=0;i<3;i++)
    {
        cin>>high;
        if(high>170)
        {
            cnt++;
        }
    }
    if(cnt==3)
    {
        cout<<"PASS";
    }
    else
    {
        cout<<"CRASH";
    }
    return 0;
}