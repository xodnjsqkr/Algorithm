#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int number[3];
    cin>>number[0]>>number[1]>>number[2];
    sort(number,number+3);
    cout<<number[1];
    return 0;
}