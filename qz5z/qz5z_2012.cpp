#include<iostream>
using namespace std;
int a[7][7];
int b[7]={0,7,4,8,9,1,5};

int main()
{
	int x=0;
	for(int i=1;i<=6;++i)
	{
		a[i][1]=b[i];
		x=i+1;
		for(int j=2;j<=6;++j)
		{
			if(x>6)
				x=1;
			a[i][j]=b[x];
			++x;
		}
	}
	for(int i=1;i<=6;++i)
	{
		for(int j=1;j<=6;++j)
			cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
