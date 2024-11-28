#include <iostream>
using namespace std;
int main(void) 
{
    int n,x,y;
    int arr[20][20]={0,};
    for(int i=1;i<20;i++) 
    {
        for(int j=1;j<20;j++) 
        {
            cin>>arr[i][j];
        }
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        for(int j=1;j<20;j++)
        {
            arr[x][j]=(arr[x][j]==0)?1:0;
            arr[j][y]=(arr[j][y]==0)?1:0;
        }
    }
    for(int i=1;i<20;i++) 
    {
        for(int j=1;j<20;j++) 
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 1;
}