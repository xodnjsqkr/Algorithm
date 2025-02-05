#include <iostream>
using namespace std;
int main(void) 
{
	int n, a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(i==1) 
            cout<<a<<" ";
		if(i==n/2+1) 
            cout<<a<<" ";
		if(i==n) 
            cout<<a;
	}
	return 0;
}