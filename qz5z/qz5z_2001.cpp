#include<iostream>
using namespace std;

int main()
{
	int n,s=1,a2=0,a5=0,temp=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		temp=i;
		while(temp%2==0)
		{
			++a2;
			temp/=2;
		}
		while(temp%5==0)
		{
			++a5;
			temp/=5;
		}
		s=(s*temp)%10;
	}
	for(int i=1;i<=a2-a5;++i)
	{
		s=(s*2)%10;
	}
	cout<<s<<endl;
	cout<<a5<<endl;
	return 0;
}
