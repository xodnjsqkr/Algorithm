#include <iostream>
using namespace std;
int main(void)
{
    int x,y,leap_year[12]={31,29,31,30,31,30,31,31,30,31,30,31},year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>x>>y;
    if((x%4==0&&x%100!=0)||(x%400==0))
    {
        cout<<leap_year[y-1];
    }
    else
    {
        cout<<year[y-1];
    }
    return 0;
}