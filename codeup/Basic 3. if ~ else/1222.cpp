#include <iostream>
using namespace std;
int main(void) 
{
    int time,x,y,cnt,rest;
    cin>>time>>x>>y;
    cnt=(90-time)/5;
    rest=(90-time)%5;
    x+=cnt;
    if(rest!=0)
        x++;
    if(x>y) cout<<"win";
    if(x==y) cout<<"same";
    if(x<y) cout<<"lose";
    return 0;
}