#include <iostream>
using namespace std;
int main(void)
{
    int x,cnt=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        if(i%10==1)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}