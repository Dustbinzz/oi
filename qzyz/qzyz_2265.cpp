#include<iostream>
using namespace std;

long xn(long x,long n)
{
	return n==0?1:x*xn(x,n-1);
}

int main()
{
	long x,n;
	cin>>x>>n;
	cout<<xn(x,n)<<endl;
	return 0;
}