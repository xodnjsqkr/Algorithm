#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int Yutnori[4]={0},cnt=0;
    string result[5]={"도", "개", "걸", "윷", "모"};
    for(int i=0;i<4;i++) 
    {
        cin>>Yutnori[i];
        if(Yutnori[i]==1)cnt++;
    }
    switch(cnt)
    {
        case 1:
            cout<<result[0];
            break;
        case 2:
            cout<<result[1];
            break;
        case 3:
            cout<<result[2];
            break;
        case 4:
            cout<<result[3];
            break;
        default:
            cout<<result[4];
            break;
    }
    return 0;
}