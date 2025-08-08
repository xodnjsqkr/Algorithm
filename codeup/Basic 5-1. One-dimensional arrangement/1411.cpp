#include <iostream>
using namespace std;
int main(void)
{
    int n,n2={0},sum=0,sum2=0;
    cin>>n;
    sum=n*(n+1)/2;
    for (int i=0;i<n-1;i++)
    {
        cin>>n2;
        sum2+=n2;
    }
    cout<<sum-sum2<<"\n";
    return 0;
}