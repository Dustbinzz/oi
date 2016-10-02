#include<cstdio>
#include<cstring>
#define MAXN 1000000
char word[257];
char str[MAXN+1];

int main()
{
	int n=0;
	char *p;
	fgets(word,257,stdin);
	fgets(str,MAXN+1,stdin);
	int len1=strlen(word),len2=strlen(str);
	word[len1-1]='\0';
	str[len2-1]='\0';
	len1=strlen(word);
	len2=strlen(str);
	while(strstr(str,word)!=NULL)
	{
		p=strstr(str,word);
		strcpy(p,p+len1);
		++n; 
	}	 
	printf("%d\n",n);
	return 0;
}
