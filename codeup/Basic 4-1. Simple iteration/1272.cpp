#include <iostream>
using namespace std;
int main(void)
{
	int x,y,sum=0;
	cin>>x>>y;
	if(x%2==0)
    {
		sum+=x*5;
	} 
    else
    {
		sum+=x/2+1;
	}
	if(y%2==0)
    {
		sum+=y*5;
	} 
    else
    {
		sum+=y/2+1;
	}
	cin>>sum;
	return 0;
}