#include <iostream>
using namespace std;
int main(void)
{
    int x;
    for(int i=0;i<10;i++)
    {
        cin>>x;
        if(x%5==0)
        {
            cout<<x;
            return 0;
        }
    }
    cout<<0;
	return 0;
}