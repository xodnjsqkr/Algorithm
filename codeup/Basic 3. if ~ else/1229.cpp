#include <iostream>
using namespace std;
int main(void)
{
    double x,y,std_weight,obesity;
    cin>>x>>y;
    if(x<150)
    {
        std_weight=x-100;
    }
    else if(x>=150&&x<160)
    {
        std_weight=((x-150)/2)+50;
    }
    else
    {
        std_weight=(x-100)*0.9;
    }
    obesity=(y-std_weight)*100/std_weight;
    if(obesity<=10)
    {
        cout<<"정상";
    }
    else if(obesity<=20)
    {
        cout<<"과체중";
    }
    else
    {
        cout<<"비만";
    }
    return 0;
}