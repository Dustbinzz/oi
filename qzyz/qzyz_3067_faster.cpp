#include<cstdio>
#include<cstring>
#define MAXN 100000
using namespace std;
char str[MAXN+1];
int a[200];

int main()
{
	fgets(str,MAXN,stdin);
	int len=strlen(str);
	for(int i=0;i<len;++i)
	{
		++a[(int)str[i]];
	}
	for(int i=0;i<len;++i)
	{
		if(a[(int)str[i]]==1)
		{
			printf("%c\n",str[i]);
			return 0;
		}
	}
	printf("no\n");
	return 0;
}
