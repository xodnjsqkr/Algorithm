#include <iostream>
using namespace std;
int main(void)
{
    int x,y,menu[6]={0,400,340,170,100,70};
    cin>>x>>y;
    if((menu[x]+menu[y])>500)
    {
        cout<<"angry";
    }
    else
    {
        cout<<"no angry";
    }
    return 0;
}