#include <iostream>
using namespace std;
int main(void)
{
    int num,max=-1000000,min=1000000;
    for(int i=0;i<5;i++)
    {
        cin>>num;
        if(max<num)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
    }
    cout<<max<<"\n"<<min;
    return 0;
}