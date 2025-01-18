#include <iostream>
using namespace std;
int main(void)
{
    int minute,score;
    cin>>minute>>score;
    for(int i=minute;i<90;i+=5)
    {
        score++;
    }
    cout<<score;
    return 0;
}