#include <iostream>
using namespace std;
int main(void)
{
    int year;
    cin>>year;
    ((year%4==0&&year%100!=0)||(year%400==0)?cout<<"Leap":cout<<"Normal");
    return 0;
}