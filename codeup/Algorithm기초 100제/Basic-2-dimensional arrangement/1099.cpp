#include <iostream>
using namespace std;
int main(void)
{
	int arr[12][12]={};
	int xx,yy;
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==2)
			{
				xx=i;
				yy=j;
			}
		}
	}
	int x=2,y=2;
	while(true)
	{
		arr[x][y]=9;
		if(x==xx&&y==yy)
		{
			break;
		}
		if(arr[x][y+1]!=1)
		{
			y++;
		}
		else if(arr[x+1][y]!=1)
		{
			x++;
		}
		else
		{
			break;
		}
	}
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cout<<arr[i][j]<<' ';
		}
		cout<<'\n';
	}
    return 0;
}