#include<iostream>
#define MAXN 1000
using namespace std;
int a[MAXN+1];

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n-1;++i)
	{
		for(int j=1;j<=n-i;++j)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int first=1;
	for(int i=1;i<=n;++i)
	{
		if(first)
		{
			cout<<a[i];
			first=0;
		}
		else
			cout<<" "<<a[i];
	}
	return 0;
}
