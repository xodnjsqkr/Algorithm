#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
	cin>>a;cin.ignore()>>b;
	cout.width(6);
	cout.fill('0');
	cout<<a<<b<<endl;
    return 0;
}