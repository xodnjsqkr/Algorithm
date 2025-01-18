#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string info;
    int sex;
    cin>>info>>sex;
    if(sex==1||sex==2)
    {
        cout<<(2012-(stoi(info.substr(0, 2))+1900))+1;
    }
    else
    {
        if(stoi(info.substr(0,2))<12)
        {
            cout<<(2012-(stoi(info.substr(0, 2))+2000))+1;
        }
        else
        {
            cout<<((stoi(info.substr(0,2))+2000)-2012)+1;
        }
    }
    return 0;
}