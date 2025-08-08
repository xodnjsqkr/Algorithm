#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    int open=0,close=0;
    getline(cin, s);
    for(char c:s)
    {
        if(c=='(')
        {
            open++;
        }
        else
        {
            close++;
        }
    }
    cout<<open<<" "<<close<<"\n";
    return 0;
}