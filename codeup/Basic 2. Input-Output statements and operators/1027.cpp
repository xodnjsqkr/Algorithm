#include <iostream>
#include <iomanip>
using namespace std;
int main(void) 
{
    int y,m,d;
    scanf("%04d.%02d.%02d",&y,&m,&d);
    cout<<setw(2)<<setfill('0')<<d<<"-";
    cout<< setw(2)<<setfill('0')<<m<<"-";
    cout<<setw(4)<<setfill('0')<<y<<endl;
    return 0;   
}