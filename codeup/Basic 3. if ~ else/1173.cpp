#include <iostream>
using namespace std;
int main(void)
{
    int h,m;
    cin>>h>>m;
    m-=30;
    if(m<0)
    {
        h--;
        m+=60;
    }
    if(h<0)
    {
        h=23;
    }
    cout<<h<<" "<<m;
    return 0;
}