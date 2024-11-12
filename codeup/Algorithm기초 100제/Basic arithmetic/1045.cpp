#include <iostream>
using namespace std;
int main(void)
{
	long long x,y;
	cin>>x>>y;
	cout<<x+y<<endl;
	cout<<x-y<<endl;
	cout<<x*y<<endl;
	cout<<fixed;
	cout.precision(2);
	cout<<x/y<<endl;
	cout<<x%y<<endl;
	cout<<(float)x/y<<endl;
	return 0;
}