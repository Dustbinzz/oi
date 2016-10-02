#include<iostream>
#include<iomanip>
#include<string.h>
#define MAXN 1000
using namespace std;
int a[MAXN+1][MAXN+1];

int main()
{
	memset(a,0,sizeof(a));
	int n,x=0,y=0;
	cin>>n;
	if(n%2==0)
	{
		cout<<"error!"<<endl;
		return 0;
	}
	x=n/2+1;
	y=n;
	a[x][y]=1;
	for(int i=2;i<=n*n;++i)
	{
		if(y+1>n&&x-1>0&&a[x-1][1]==0)
		{
			a[x-1][1]=i;
			--x;
			y=1;
			continue;
		}
		else if(y+1>n&&x-1>0&&a[x-1][1]!=0)
		{
			a[x][y-1]=i;
			--y;
			continue;
		}
		else if(y+1>n&&x-1<1&&a[n][1]==0)
		{
			a[n][1]=i;
			x=n;
			y=1;
			continue;
		}
		else if(y+1>n&&x-1<1&&a[n][1]!=0)
		{
			a[x][y-1]=i;
			--y;
			continue;
		}
		else if(x-1<1&&a[n][y+1]==0)
		{
			a[n][y+1]=i;
			x=n;
			++y;
			continue;
		}
		else if(x-1<1&&a[n][y+1]!=0)
		{
			a[x][y-1]=i;
			--y;
			continue;
		}
		else if(a[x-1][y+1]==0)
		{
			a[x-1][y+1]=i;
			--x;
			++y;
			continue;
		}
		else
		{
			a[x][y-1]=i;
			--y;
		}	
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			cout<<setw(5)<<a[i][j];
		cout<<endl;
	}
	return 0;
}
