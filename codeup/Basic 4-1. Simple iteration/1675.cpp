#include <iostream>
using namespace std;
int main(void) 
{
    char x;
    while(cin.get(x)) 
    {
        if(x=='\n') break;
        if(x>='a'&&x<='z') 
        {
            if('d'<=x) 
            {
                cout<<(char)(x-3);
            } else 
            {
                cout<<(char)(x+23);
            }
        } 
        else 
        {
            cout<<x;
        }
    }
    return 0;
}