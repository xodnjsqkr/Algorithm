#include <iostream>
using namespace std;
int main(void)
{
    double x,y,obesity=0;
    cin>>x>>y;
    obesity=(y-((x-100)*0.9))*100/((x-100)*0.9);
    if(obesity<=10)
    {
        cout<<"정상";
    }
    else if(10<obesity&&obesity<=20)
    {
        cout<<"과체중";
    }
    else
    {
        cout<<"비만";
    }
    return 0;
}