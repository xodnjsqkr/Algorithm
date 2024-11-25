#include <iostream>
using namespace std;
int main(void)
{
    long long int a,m,d,n,i=0;
    cin>>a>>m>>d>>n;
    while(i<n-1) 
    {
        a=a*m+d;    
        i++;
    }
    cout<<a<<endl;
    return 0;
}