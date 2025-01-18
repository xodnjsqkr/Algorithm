#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    if(x>0)
    {
        if(x%2==0)
        {
            cout<<"plus\neven"<<endl;
        }
        else
        {
            cout<<"plus\nodd"<<endl;
        }
    }
    else
    {
        if(x%2==0)
        {
            cout<<"minus\neven"<<endl;
        }
        else
        {
            cout<<"minus\nodd"<<endl;
        }
    }

    return 0;
}