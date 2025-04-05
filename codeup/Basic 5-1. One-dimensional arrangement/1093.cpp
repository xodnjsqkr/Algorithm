#include <iostream>
using namespace std;
int main(void)
{
    int n,n2,arr[24]={0,};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>--n2;
        arr[n2]++;
    }
    for (int i=1;i<24;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}