#include<iostream>
#include<math.h>
#define MAXN 100
using namespace std;
int a[MAXN+1][MAXN+1];
int ans[MAXN+1][MAXN+1];

int main()
{
	int m,n;
	double temp=0.0;
	cin>>m>>n;
	for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=n;++j)
			cin>>a[i][j];
	}
		for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=n;++j)
			ans[i][j]=a[i][j];
	}
	for(int i=2;i<=m-1;++i)
	{
		for(int j=2;j<=n-1;++j)
		{
			temp=(double)((a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]+a[i][j])/5.0);
			if((temp+0.5)>ceil(temp))
			{
				ans[i][j]=(int)(ceil(temp));
			}
			else
			{
				ans[i][j]=(int)(floor(temp));
			}
		}
	}
	int first=1;
	for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(first)
			{
				cout<<ans[i][j];
				first=0;
			}
			else
				cout<<" "<<ans[i][j];	
		}
		cout<<endl;
		first=1;
	}
	return 0;
}
