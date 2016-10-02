#include<iostream>
using namespace std;
int calc(int x,int y,char c);

int main()
{
	int a,b;
	char c;
	cin>>a>>c>>b;
	int result=calc(a,b,c);
	cout<<result<<endl;
	return 0;
}

int calc(int x,int y,char c)
{
	switch(c)
	{
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
		case '%':
			return x%y;
	}
	return 0;
}
