#include<iostream>
#include<iomanip>
#define MAXN 100
using namespace std;
int a[MAXN+1][MAXN+1];

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			cin>>a[i][j];
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(a[i][j])
			{
				cout<<setw(3)<<i<<setw(3)<<j<<setw(3)<<a[i][j]<<endl;
			}
		}
	}
	return 0;
}
