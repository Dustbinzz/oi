#include<iostream>
#include<cstdio>
#include<cstring>
#define MAXN 100000
using namespace std;
char str[MAXN+1];
int a[27];
int b[27]={0};

int main()
{
	int x=26,asc=0,appr=0,quick=-1;
	cin.getline(str,MAXN);
	for(unsigned int i=0;i<=strlen(str);++i)
	{
		asc=(int)str[i]-96;
		if(b[asc]==0)
		{
			b[asc]+=x;
			--x;
		}
		++a[asc];
	}
	for(int i=1;i<=27;++i)
	{
		if((a[i]==1)&&(b[i]>quick))
		{
			quick=b[i];
			asc=i;
			appr=1;
		}
	}
	if(appr==0)
		cout<<"no"<<endl;
	else
		printf("%c\n",asc+96);
	return 0;
}
