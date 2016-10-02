#include<iostream>
#include<cctype>
#include<string.h>
#define MAXN 255
using namespace std; 
char str[MAXN+1];

int main()
{
	int a=0;
	cin.getline(str,MAXN);
	for(unsigned int i=0;i<=strlen(str);++i)
	{
		if(isdigit(str[i]))
			++a;
	}
	cout<<a<<endl;
	return 0;
}
