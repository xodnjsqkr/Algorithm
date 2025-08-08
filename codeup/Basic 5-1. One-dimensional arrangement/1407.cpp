#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s,result;
    getline(cin, s);
    for(char c:s) 
    {
        if(c!=' ')
        {
            result+=c;
        }
    }
    cout<<result<<"\n";
    return 0;
}