#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    char symbol;
    cin>>x>>symbol>>y;
    switch(symbol)
    {
        case '+':
            cout<<x+y;
            break;
        case '-':
            cout<<x-y;
            break;
        case '*':
            cout<<x*y;
            break;
        default:
            cout<<fixed;
            cout.precision(2);
            cout<<x/(float)y;
            break;
    }
    return 0;
}