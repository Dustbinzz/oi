#include<iostream>
#include<math.h>
#define MAXN 9		
using namespace std;
int a[MAXN+1][MAXN+1];

int main()
{
	double n;
	cin>>n;
	int b=(int)n;
	for(int i=1;i<=ceil(n/2);++i)
	{
		for(int j=i;j<=n+1-i;++j)
		{
			for(int k=i;k<=n+1-i;++k)
			{
				if(j==i||j==n+1-i)
					a[j][k]=b;
				else
				{	
					if(k==i)
						a[j][k]=b;
					if(k==n+1-i)
						a[j][k]=b;
				}
			}
		}
		--b;	
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
