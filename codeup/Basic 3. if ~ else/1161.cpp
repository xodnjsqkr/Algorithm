#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin>>x>>y;
    if(x%2==0&&y%2==0)
    {
        cout<<"짝수+짝수=짝수";
    }
    else if(x%2==0&&y%2==1)
    {
        cout<<"짝수+홀수=홀수";
    }
    else if(x%2==1&&y%2==0)
    {
        cout<<"홀수+짝수=홀수";
    }
    else if(x%2==1&&y%2==1)
    {
        cout<<"홀수+홀수=짝수";
    }
    return 0;
}