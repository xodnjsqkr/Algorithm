#include <iostream>
using namespace std;
int main(void)
{
    char str[20];
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<"\'"<<str[i]<<"\'"<<endl;
    }
    return 0;
}