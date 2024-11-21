#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    if(x>=90)
    {
        cout<<"A"<<endl;
    }
    else if(x>=70)
    {
        cout<<"B"<<endl;
    }
    else if(x>=40)
    {
        cout<<"C"<<endl;
    }
    else if(x>=0)
    {
        cout<<"D"<<endl;
    }
    return 0;
}