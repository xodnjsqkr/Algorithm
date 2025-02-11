#include <iostream>
using namespace std;
int main(void)
{
    int n,result=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            result+=i;
        }
    }
    cout<<result<<endl;
    return 0;
}