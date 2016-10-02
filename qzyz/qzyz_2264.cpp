#include<iostream>
using namespace std;

int fac(int n)
{
	return n==0?1:n*fac(n-1);
}

int main()
{
	int n;
	cin>>n;
	cout<<fac(n)<<endl;
	return 0;
}