#include <iostream>
using namespace std;
int main(void) 
{
    int x;
    cin>>x;
    switch (x) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
            cout << "oh my god";
            break;
        default:
            cout << "enjoy";
            break;
    }
    return 0;
}