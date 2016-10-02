#include<iostream>
#define MAXN 100
using namespace std;
int a[MAXN+1];

int main()
{
	int n,temp=0;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n-1;++i)
	{
		for(int j=i+1;j<=n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
