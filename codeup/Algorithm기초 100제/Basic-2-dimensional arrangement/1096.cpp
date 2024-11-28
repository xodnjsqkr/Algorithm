#include <iostream>
using namespace std;
int main(void)
{
    int n,arr[20][20]={0,};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
    }
    for(int i=1;i<=19;i++)
    {
        for(int j=1;j<=19;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}