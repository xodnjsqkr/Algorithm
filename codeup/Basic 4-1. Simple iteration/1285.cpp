#include <iostream>
using namespace std;
int main(void)
{
    char symbol;
    int  in,sum=0;
    cin>>sum;
    while(cin>>symbol)
    {
        if(symbol=='=') break;
        cin>>in;
        switch(symbol) 
        {
            case '+': sum+=in; break;
            case '-': sum-=in; break;
            case '*': sum*=in; break;
            default:  sum/=in; break;
        }
    }
    cout<<sum;
    return 0;
}