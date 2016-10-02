#include<cstdio>
#include<cstring>
char name[10][10];

int main()
{
	for(int i=0;i<10;++i)
		fgets(name[i],10,stdin);
	char temp[10];
	for(int i=0;i<9;++i)
	{
		for(int j=0;j<9-i;++j)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	for(int i=0;i<10;++i)
	{
		printf("%s",name[i]);
	}
	return 0;
}
