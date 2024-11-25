#include <iostream>
using namespace std;
int main(void)
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;;i++)
    {
        sum+=i;
        if(sum>=n)
        {
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}