#include <iostream>
using namespace std;
int main(void)
{
    int x,input[1000]={0};
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>input[i];
    }
    for(int i=x-1;i>=0;i--)
    {
        cout<<input[i]<<" ";
    }
    return 0;
}