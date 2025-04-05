#include <iostream>
using namespace std;
int main(void)
{
    int n,n2,cnt=23;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>n2;
        if(cnt>n2)
        {
            cnt=n2;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}