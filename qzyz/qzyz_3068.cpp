#include<cstdio>
#include<iostream>
#include<math.h>
#include<cstring>
#define MAXN 500
using namespace std;
char a[MAXN+1]; 
char b[MAXN+1];

int main()
{
	double limit=0.0,x=0.0;
	cin>>limit;
	getchar();
	cin.getline(a,MAXN+1);
	cin.getline(b,MAXN+1);
	int len=strlen(a);
	for(int i=0;i<len;++i)
	{
		if(a[i]==b[i])
			x=x+1;
	}
	x=x/(len*1.0); 
	if(fabs(x-limit)<1e-6)
		cout<<"yes"<<endl; 
	else
		cout<<"no"<<endl;
	return 0;
}
