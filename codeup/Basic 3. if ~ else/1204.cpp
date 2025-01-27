#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    if(x>=11&&x<=13) 
    {
        cout << x << "th";
    } 
    else 
    {
        switch(x%10)
        {
            case 1:
                cout<<x<<"st";
                break;
            case 2:
                cout<<x<<"nd";
                break;
            case 3:
                cout<<x<<"rd";
                break;
            default:
                cout<<x<<"th";
                break;
        }
    }
    return 0;
}