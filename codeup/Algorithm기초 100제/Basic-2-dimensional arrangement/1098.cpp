#include <iostream>
using namespace std;
int main(void)
{
	int board[100][100]={};
	int h,w,n,l,d,x,y;
	cin>>h>>w;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>l>>d>>x>>y;
		if(d)	
		{
			for(int j=0;j<l;j++)
			{
				board[x+j][y]=1;
			}
		}
		else
		{
			for(int j=0;j<l;j++)
			{
				board[x][y+j]=1;
			}
		}
	}
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			cout<<board[i][j]<<' ';
		}
		cout<<'\n';
	}
    return 0;
}