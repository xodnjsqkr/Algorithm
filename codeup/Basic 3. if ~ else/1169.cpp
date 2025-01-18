#include <iostream>
using namespace std;
int main(void)
{
    int year,x;
    cin>>x;
    year=2012+1-x;
    cout<<year%100<<" "<<(year/100!=20?1:3);
    return 0;
}