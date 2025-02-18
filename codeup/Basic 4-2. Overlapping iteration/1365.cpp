#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(i==0||i==x-1||j==0||j==x-1||i==j||i+j==x-1) // 젤위 젤 하단 오른쪽 옆 왼쪽 옆 오른쪽 대각선 왼쪽 대각선
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}