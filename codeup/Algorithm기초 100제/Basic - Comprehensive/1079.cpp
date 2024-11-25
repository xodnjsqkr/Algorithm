#include <iostream>
using namespace std;
int main(void)
{
    char c;
    while(true)
    {   
        cin>>c;
        if(c!='q')
        {
            cout<<c<<endl;
        }
        else
        {            
            cout<<c;
            return 0;
        }
    }
}