#include <iostream>
using namespace std;
int main(void) 
{
    int x,y,z,i=1;
    cin>>x>>y>>z;
    while(true)
    {
        if(i%x==0&&i%y==0&&i%z==0)
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}