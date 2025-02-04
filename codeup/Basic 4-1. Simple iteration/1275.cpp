#include <iostream>
using namespace std;
int main(void)
{
    int x,y,result=1;
    cin>>x>>y;
    for(int i=1;i<=y;i++)
    {
        result*=x;
    }
    cout<<result;
}